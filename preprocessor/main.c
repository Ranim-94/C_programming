
#include<stdio.h>
#include"ifdef_demo.h"
#include"macros_demo.h"


// choose what demo to run
#define DEMO_CHOICE 2

int main(){

printf("\t ============ Welcom to C preprocessor! ============ \n ");

int demo_list_choice[] = {0,1,2};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run)
{
case 0:
    run_ifdef_demo(); // demo #0
    break;

case 1:
    run_if_demo(); // demo #1
    break;

case 2:
    run_macros_func_demo(); // demo #2


default:
    break;
} // End swith case 




} // End main 