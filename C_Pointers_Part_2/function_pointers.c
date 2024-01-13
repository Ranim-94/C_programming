

#include"function_pointers.h"
#include"helper_function.h"

#include<stdio.h>


void run_function_pointers(void){

// so we can generate random numbers each time we run the code
srand(time(NULL));

float limit = 5.0;

// initialize some random value between 0 and limit
float numb_1 = generate_random_nb(limit); 
float numb_2 = generate_random_nb(limit);

// call the add function
float result = add(numb_1,numb_2);

// print some results
printf("\n Displaying input and output \n");
printf("\n Input: numb_1 = %.1f , numb_2 = %.1f | Result = %.1f  \n",numb_1,numb_2,result);

// displaying address of the function used
printf(" Address of function add(): &add = %p \n",&add);

// create some function pointer
float (*pfn)(float,float) = add ;
// syntax: return type (*pfn) (list of arguments type) = name of the function
// pfn: an abbreviation for pointer function, used in many code bases as convention

// use the function add() using function pointer
printf("\n Call the function add() using it pfn declaration \n");

printf("\n Input: numb_1 = %.1f , numb_2 = %.1f | Result = %.1f  \n",numb_1,numb_2,pfn(numb_1,numb_2));



} // End run_function_pointers()


