
#include <stdio.h>

#include "files_basics_write.h"
#include "files_read.h"
#include "write_binary.h"
#include "struct_binary.h"

// choose what demo to run
#define DEMO_CHOICE 3

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

case 2:
	write_to_binary(); /* demo # 2 */
	break;

case 3:
	write_struct_binary(); /* demo # 3 */
	break;

default:
    break;

} // End switch case


} // End main


/*
 *
 * 1- differences between text file and binary:
 * 	1.1- the representation of data
 * 	suppose we have a decimal number = 110 000
 * 	- In a text file, each char of this number is represented as
 * 	a byte
 * 	1 -> maybe 1000 1100
 * 	1 -> 1001 1100
 *
 * 	and so on
 *
 * 	so the number of bytes = 6 * 8 = 40 bytes
 *
 * whereas in a binary file, we represented directly as
 * a normal conversion from decimal to binary
 *
 *
 *
 *
 * */





