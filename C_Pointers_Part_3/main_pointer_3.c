
#include<stdio.h>
#include "arrays_2D.h"
#include "callback_demo.h"


// choose what demo to run
#define DEMO_CHOICE 0

int main(){

printf("\t ============ Welcome to pointers demo part 3 in C ============ \n ");

int demo_list_choice[] = {0, // 2D arrays (static and dynamic)
		1, // callback demo
		2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run){

	case 0:
    run_2D_arrays(); // demo #0
    break;

	case 1:
	run_callback_demo();
	break;






default:
    break;
} // End swith case 




} // End main 
