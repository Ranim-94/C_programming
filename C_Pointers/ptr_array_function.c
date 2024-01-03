
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

#include"ptr_array_function.h"

#define ARRAY_SIZE 5

// delcaring prototype local functions
void print_array_v1(float some_arr[], size_t arr_size);

//============================ Start Source File ============================

void ptr_array_function(void){

printf("\n\t===============================================\n \n ");
printf("\t  Pointer Array and Functions Demo  \n\n");
printf("\t===============================================\n \n ");

// so we can generate random numbers each time we run the code
srand(time(NULL));


// declare some empty array 
float arr_data[ARRAY_SIZE]; 

// fill in the array randomly between 0 and ARRAY_SIZE
for (int i=0; i<ARRAY_SIZE; i++){

    arr_data[i] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    arr_data[i] *= ARRAY_SIZE; // scale up to ARRAY_SIZE

} // End for loop filling content

printf("\t\n -> Size of array used in the scope (before passing into a local function) = %d bytes \n",sizeof(arr_data));

// displaying the content
print_array_v1(arr_data,ARRAY_SIZE);


// Part 2: return the array from the function



} // End ptr_array_function


// ========================= Some local helper function ===========================

void print_array_v1(float some_arr[], size_t arr_size){

printf("\t \n Printing content of array through array: using array name and index \n");

// print the content  of the array using array name and index 
for (int i=0; i<arr_size; i++){

    printf("\t -> # %d = %f \n",i,some_arr[i]) ;

} // End for loop printing

// print size of array used in this local function

printf("\t\n -> Size of array used in local function = %d bytes \n",sizeof(some_arr));
// the size here is different from the size in the scope because the compiler 
// parse it into a pointer of type float <=> float* ptr_some_arr


} // End print_array_v1()







