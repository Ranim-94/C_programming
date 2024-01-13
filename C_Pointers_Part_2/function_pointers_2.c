

/*

Here in this demo, we can see that 
we have assign the pfn to some new function at run time
This is a very powerful technique in event driven programming 
(when we have some button to click based on some event)

*/


#include"function_pointers_2.h"
#include"helper_function.h"

#include<stdio.h>

void fn_ptr_run_time(void){

// so we can generate random numbers each time we run the code
srand(time(NULL));

float limit = 5.0;

// initialize some random value between 0 and limit
float numb_1 = generate_random_nb(limit); 
float numb_2 = generate_random_nb(limit);

// generate some random number between 0 and 1
float threshold = (float)rand()/(float)(RAND_MAX);

// create a function pointer and assign to NULL
float (*pfn)(float,float) = NULL;

printf("\n -> Threshold value = %.1f \n",threshold);

// depending on the value of the threshold, we assign pfn to either add() or multiply()
if (threshold <= 0.5){

// assign pfn to add()
pfn = add;
printf("\n -> The pfn will perform an add operation -> &pfn = &add \n");

}else{

// assign pfn to multiply()
pfn = multiply;
printf("\n -> The pfn will perform a multiply operation -> &pfn = &multiply \n");

} // End if else;

// call the pfn function to perform the operation 
float result = pfn(numb_1,numb_2);

printf("\n -> Displaying arithmetic operation info \n");
printf("\n -> Input: numb_1 = %.1f , numb_2 = %.1f | Result = %.1f  \n",numb_1,numb_2,result);



printf("\n =========================== \n");

printf("\n -> Printing addresses \n");

printf("\n &pfn = %p | &add = %p | &multiply = %p \n",pfn,&add,&multiply);


printf("\n ============ End demo ============ \n");



} // End fn_ptr_run_time()


