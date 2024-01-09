
#include<stdio.h>
#include"different_passes.h"
#include"array_manip.h"

#define ARRAY_SIZE 4

// start simulation
void run_different_passes(void){

printf("Running demo for different argument passes into a function \n");

// set some value
float x = 45.3 ;

printf("\n --> Printing value content before calling any function, variable x = %.1f \n ",x);

printf("\n --> Passing argument by value = argument are copied <-> we don't have the actual value");

// call the function: passing argument by value
set_value(x);

printf("\n --> Printing value content after calling set_value(), variable x = %.1f \n ",x);

// passing value by value semantic
set_value_ptr(&x); // notice here that we give the addresse
// since in the called function, pointer are used in the implementation

printf("\n --> Printing value content after calling set_value_ptr(), variable x = %.1f \n ",x);

// let's try to increment x by 1
printf("\n --> Incrementing x by 1 \n");

// call the local function increment()
increment(&x);

printf("\n --> value of x after incrementing = %.1f \n",x) ;

printf("\n --> main code info: address of x = %p \n",&x);

printf("\n --> Notice that how the addresses are = between the function body increment()\n") ;       
printf(" which means we are accessing the variable x directly from the increment() using pointers \n" );


//================ Incrementing an array ===================
// declaring and initializing the array directly
float arr_data[ARRAY_SIZE];

// filling the data in arr_data[]
generate_random_array(arr_data,ARRAY_SIZE);

// display the values to the console
printf("\n -> Array content: \n");
display_array(arr_data,ARRAY_SIZE);

// increment by 1 the values by calling the local function increment_arr()
increment_arr(arr_data,ARRAY_SIZE);
// notice that here since we are dealing with array data type,
// we don't use the & operator as in previous calls (<-> array decaying phenomena)

// display the values after incrementing
printf("\n -> Array content after incrementing \n");
display_array(arr_data,ARRAY_SIZE);

// incrementing some part of the array starting from some index <-> application to pointer notation and offset concept
increment_arr(arr_data+2,ARRAY_SIZE);
// Explanation
// here when we use arr_data+2 <-> pointer + some offset (=2 in this case)
// in the function definition, all that we have is a pointer 
// <-> in other words, the function definition doesn't know anything about an array
// being used in the caller
// so when start incrementing, the starting index = starting addresse + 2 -> access to the 3rd elements
// (since we are counting from 0)

printf("\n -> Array content after incrementing starting from some offet <-> Partial Incrementing \n");
display_array(arr_data,ARRAY_SIZE);

} // End run_different_passes()


// ====================== Definition of helper function for different_passes.c ======================

// function #1: pass by value
void set_value(float some_value){

some_value = (float)99;

} // End set_value()


// pass by reference
void set_value_ptr(float* some_value){
// since we are using pointers of primitive data type (so no array is passed),
// we need to use dereference operator *

*(some_value) = (float)99;

} // End set_value()

void increment (float* some_value){

printf("\n function body:  the address of some_value = %p \n",some_value) ;

*some_value = *some_value + 1 ;

} // End function increment()


void increment_arr(float* some_arr, size_t array_size){

for (int i = 0 ; i< array_size ; i++) {

some_arr[i] += 1; // increment a value by 1

} // End for loop


} // End function increment_arr()