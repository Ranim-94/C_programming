

#include<stdio.h>
#include"char_demo.h"
#include"char_ptr.h"
#include"string_func_demo.h"

// choose what demo to run
#define DEMO_CHOICE 2

int main(void){

int demo_list_choice[] = {0,1,2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];


switch (demo_to_run){

case 0:
run_char_demo_1(); // demo #0
break;

case 1:
run_char_ptr(); // demo #1
break;

case 2:
run_string_func(); // demo #2
break;

default:
    break;

} // End switch case


} // End main()