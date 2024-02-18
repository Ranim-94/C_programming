
#include<stdio.h>
#include"ifdef_demo.h"


// choose what demo to run
#define DEMO_CHOICE 1

int main(){

printf("\t ============ Welcom conditional compilation in C ! ============ \n ");

int demo_list_choice[] = {0,1};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run)
{
case 0:
    run_ifdef_demo(); // demo #0
    break;

case 1:
    run_if_demo(); // demo #1
    break;


default:
    break;
} // End swith case 




} // End main 