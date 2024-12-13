
#include<stdio.h>
#include"c_pointer_demo.h"
#include"dynamic_array.h"
#include"ptr_array_relation.h"
#include "ptr_array_function.h"
#include"array_as_return_type.h"
#include"different_passes.h"

// choose what demo to run
#define DEMO_CHOICE 1 

int main(){

printf("\t ============ Welcom to pointers fundamentals in C ============ \n ");

int demo_list_choice[] = {0,1,2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run)
{
case 0:
    run_pointer_basics(); // demo #0
    break;

case 1:
    // run create some dynamic array
    create_dynamic_array(); // demo # 1
    break;

case 2:
    // run array and pointer demo
    run_demo_ptr_array_relation(); // demo # 2
    break;

case 3:
    // run array pointer function demo
    ptr_array_function(); // demo #3
    break;


case 4:
    // run array pointer function demo
    array_return_from_function_demo(); // demo #4
    break;

case 5:
    // run array pointer function demo
    run_different_passes(); // demo #5
    break;

default:
    break;
	} // End switch case


/*
 *
 * Some main points:
 * 1- for an array created on the stack:
 * 		1.1- If the array is passed to a function, it will be passed as a ptr
 * 		-> arrays decay to ptrs, and as consequence we won't have the length
 * 		infor if we want to iterate through out the array
 *
 * 		1.2- that's why for an array created on the stack, we need also
 * 		to pass its length
 *
 * 		1.3- length computation: size_t length_arr = sizeof(arr_name)/sizeof(float)
 *
 * 		where arr_name is of type float
 *
 *
 * 2- When array (created at the stack) are passed to some functions
 * 		- recall always that inside the scope of the function they are
 * 		parsed or decayed to a pointer
 * 		- so for some declaration as print_some_arr(float arr[])
 * 		or print_some_arr(float* arr), the 2 declarations will be
 * 		parsed as pointers, even if in the 1st declaration we use
 * 		float arr[] as parameter
 *
 *
 *
 * */



} // End main()
