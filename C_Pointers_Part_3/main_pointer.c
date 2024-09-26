
#include<stdio.h>
#include "arrays_2D.h"


// choose what demo to run
#define DEMO_CHOICE 0

int main(){

printf("\t ============ Welcom to pointers demo part 2 in C ============ \n ");

int demo_list_choice[] = {0,1,2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run)
{
case 0:
    run_2D_arrays(); // demo #0
    break;



default:
    break;
} // End swith case 




} // End main 