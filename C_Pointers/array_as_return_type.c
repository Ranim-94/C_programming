
// =============  Description and content  =============

/*
Facts to remember:
=================
Although pointer and arrays are related, but each one of them is a unique data structure
In this demo, we shall point out these differences

Content:
=========
    1- pass array to functions (array decaying to pointer phenomena) --> we see that when passing array to functions
        arrays will be decayed to pointers
    
    2- return an an array from a C function:
        In C, we can't return an array explictly, but we can use array and pointer relation
        in order to return a pointer to this array, store it in some variable
        and then use this pointer to access the array

    It is very similar to what we will do in point 1)

    In other words, the array_name will be treated as a pointer inside the scope of local function
    and we will use it as return type

    
*/


#include<time.h> // for time
#include<stdio.h>
#include<stdlib.h> // to use RAND_MAX

#include"array_as_return_type.h"

#define ARRAY_SIZE 5

// delcaring prototype local functions
float* generate_array_fixed_value(float value);
void generate_random_array_v1_local(float* array_ptr,size_t arr_size);
float* generate_random_array_v2(size_t arr_size);
float* generate_random_array_v3(void);
void display_array_local(float some_arr[], size_t arr_size);

//============================ Start Source File ============================

void array_return_from_function_demo(void){

printf("\n\t===============================================\n \n ");
printf("\t  Return an Array from a Function Demo  \n\n");
printf("\t===============================================\n \n ");


// we will try to generate some random array values and return it from the function using different methods

// Method 0: the logical way but wrong

// Uncomment this block in case we need to run it

/*
float value = 4.2; // some value to fill in the array with

// call the function and assign the result to the pointer
float* array_method_0 = generate_array_fixed_value(value);

printf("\t-> Display content of array using method 0 (return a pointer pointing to the array) \n");

// display the result
display_array(array_method_0,ARRAY_SIZE); // call the helper function to display the content

*/


/*
    This method altough it is logical, but the values displayed to the console
    are wrong because the local variable in the function have a sope only inside
    the function -> this means array_local[] has gone once we reach the return statment

    So when we try to display it using float* array_method_0, this pointer won't find the array_local[] because
    array_local[] will be gone

    This motivate the method 1: instead of return a pointer to an array, we will pass this pointer
    as argument into the function definition 
    
    and in the function call, the array_name will be passed as argument (since it is equivalent to a pointer)

    By this way, we will have a pointer pointing to an array
    
*/

// Method 1 to return an array: using array name in the function call, and decay it to a pointer

/*
By declaring arr_data into the scope of our code and pass it into the function
the array will decay into a pointer <--> we will have a pointer pointing to our local array in our scope
by using this pointer, we can do whatever we want to our local declared array

*/

// step 1: declare an empty array with some size 
// (so note that for method 1, we need to declar an array into the scope of our program)
float arr_data[ARRAY_SIZE]; 

// call the function of method 1: using array_name/pointer as argument 
generate_random_array_v1_local(arr_data,ARRAY_SIZE);

printf("\t\n -> Size of array used in the scope (before passing into a local function) = %ld bytes \n",sizeof(arr_data));

printf("\t-> Display content of array using method 1 (using array_name/pointer as arguments in the function) \n");
// displaying the content
display_array(arr_data,ARRAY_SIZE); // call the helper function to display the content

// Method 2 return the array from the function: using pointer as return type and malloc() function, and free()
float* arr_data_v2 = generate_random_array_v2(ARRAY_SIZE);

printf("\t-> Display content of array using method 2 (using malloc() and ptr as return type) \n");

// displaying the content
display_array(arr_data_v2,ARRAY_SIZE); // call the helper function to display the content

// Once we finish using the allocated data (array in this case), we need to free the memory
free(arr_data_v2);

// Method 3: using static keyword
float* arr_data_v3 = generate_random_array_v3();

printf("\t-> Display content of array using method 3 (using static keyword) \n");

// displaying the content
display_array(arr_data_v3,ARRAY_SIZE); // call the helper function to display the content

/*
    Adv: we don't use heap and free
    Dist: - regarding the size of the array, we need to hardcode it 
    (because the array are in the stack, and they need to have a constant size storage)
    - we will have the array in the entire lifecycle of the program
    so unless we are sure we want this, it will waste memory

*/



} // End ptr_array_function

//============================ End Source File ============================


// ========================= Some local helper function ===========================

// function method 0 (uncomment the block if we want to run it)
/*
float* generate_array_fixed_value(float value){

// declare some array
float array_local[5];

for (int i=0; i<5; i++){

array_local[i] = value;

} // End filling the array with the constant value

// recall that array name is equivalent to a pointer
return array_local;

} // End generate_array_fixed_value()

*/


// function method 1
void generate_random_array_v1_local(float* array_ptr,size_t arr_size){

// by using this type of implementation, the array_ptr is pointing to some declared array
// in the local main program (where this function is being called)

// so we can generate random numbers each time we run the code
srand(time(NULL));

// fill in the array randomly between 0 and ARRAY_SIZE
// but pay attention here we are using the pointer and not the actual array
for (int i=0; i<arr_size; i++){

    array_ptr[i] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    array_ptr[i] *= arr_size; // scale up to ARRAY_SIZE

} // End for loop filling content

} // End generate_random_array_v1_local()

// function method 2
float* generate_random_array_v2(size_t arr_size){


// allocate a array on the heap using malloc()
float* array_ptr = malloc(sizeof(float)*arr_size);

// Now we fill in the array using the array_ptr returned by malloc()
// fill in the array randomly between 0 and ARRAY_SIZE
for (int i=0; i<arr_size; i++){

    array_ptr[i] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    array_ptr[i] *= arr_size; // scale up to ARRAY_SIZE

} // End for loop filling content


return array_ptr;
// because array_ptr is on the heap, even when we reach return statment
// the variable array_ptr still exist in the scope of program even when
// we exit the scope of this function

} // End function generate_random_array_v2()

// function method 3 using the static keyword
float* generate_random_array_v3(void){

// declaring some array
static float array_data_v3[5];


// Now we fill in the array using the array_ptr returned by malloc()
// fill in the array randomly between 0 and ARRAY_SIZE
for (int i=0; i<5; i++){

    array_data_v3[i] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    array_data_v3[i] *= 5; // scale up to ARRAY_SIZE

} // End for loop filling content


return array_data_v3;
// because we are using static keyword, the array exist all along 
// the program 

} // End function generate_random_array_v2()


// display content of some array
void display_array_local(float some_arr[], size_t arr_size){

printf("\t \n Printing content of array \n");

// print the content  of the array using array name and index 
for (int i=0; i<arr_size; i++){

    printf("\t -> # %d = %f \n",i,some_arr[i]) ;

} // End for loop printing

// print size of array used in this local function

printf("\t\n -> Size of array used in local function = %ld bytes \n",sizeof(some_arr));
// the size here is different from the size in the scope because the compiler 
// parse it into a pointer of type float <=> float* ptr_some_arr


} // End display_array_local()







