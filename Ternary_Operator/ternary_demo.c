

/*
    Explanation:

    - ternary opeartor is a way to write an inline if-else statment
    - they can be useful when there is nothing in between the if-else statment
     - for example, true or false directly, day or night,...
     - if we have multiple if-else it is not a very good idea to use it

    - it can be used also inside some computation expression as we see in this demo


*/


#include"ternary_demo.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h> // for time


float generate_random_nb(float limit); // a helper function

void run_ternary_operator(void){


// We start by a normal if-else, then do the same by using the ternary operator

float a, b, c; // declaring 3 numbers

float limit = 5; // setting the limit



// generating some random values between 0 and Limit
// a = generate_random_nb(limit);

a = 3;
b = 3;// we add +1 so we can have some different random number


// normal if else

if (a==b){

c = (float)limit;

}else {

c = 0;

} // End if-else

printf("-> Using normal if-else statment\n") ;

printf("\n a = %1.f, b = %1.f, c = %1.f \n",a,b,c);

printf("-> Using ternary operator \n") ;

c = (a==b)?limit:0; 

// Explanation"
/*
    (a==b) -> this will result in a boolean expression
    if true then c = limit
    else (so false) c = 0
*/

printf("\n a = %1.f, b = %1.f, c = %1.f \n",a,b,c);

printf("\n -> Using ternary inside a computation or operation \n");

float result = 10*((a==b)?2:1);
// if true  -> result = 10*2 = 20;

printf("\n result = %.1f \n",result);



}// End run_ternary_operator()


float generate_random_nb(float limit){

// so we can generate random numbers each time we run the code
srand(time(NULL));

float nb = (float)rand()/((float)RAND_MAX); // floating point number between 0 and 1
nb *= (float)limit; // scale up to limit

return nb;

} // End generate_random_nb()
