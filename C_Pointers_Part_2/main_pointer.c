
#include<stdio.h>
#include"function_pointers.h"
#include"function_pointers_2.h"
#include"void_pointer.h"
#include"array_oop_client.h"


// choose what demo to run
#define DEMO_CHOICE 3

int main(){

printf("\t ============ Welcom to pointers demo part 2 in C ============ \n ");

int demo_list_choice[] = {0,1,2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run)
{
case 0:
    run_function_pointers(); // demo #0
    break;

case 1:
    fn_ptr_run_time(); // demo #1
    break;

case 2:
    run_void_ptr_demo(); // demo #2
    break;

case 3:
    run_array_oop(); // demo #3
    break;

default:
    break;
} // End swith case 




} // End main 