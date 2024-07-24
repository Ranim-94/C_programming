
#include <stdio.h>

#include "files_basics_write.h"
#include "files_read.h"

// choose what demo to run
#define DEMO_CHOICE 1

int main(){

printf("\t ============ Welcom to files in C ============ \n ");

int demo_list_choice[] = {0,1,2,3,4,5};

int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run){
case 0:
    run_files_write(); // demo #0
    break;

case 1:
    run_files_read(); // demo #1
    break;

default:
    break;

} // End swith case 




} // End main 