
#include<stdio.h>
#include"c_pointer_demo.h"
#include"dynamic_array.h"
#include"ptr_array_relation.h"
#include "ptr_array_function.h"
#include"array_as_return_type.h"

// choose what demo to run
#define DEMO_CHOICE 4 

int main(){

printf("\t ============ Welcom to pointers fundamentals in C ============ \n ");

int demo_list_choice[] = {0,1,2,3,4};

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


case 4:
    // run array pointer function demo
    array_return_from_function_demo(); // demo #4

default:
    break;
} // End swith case 









} // End main 