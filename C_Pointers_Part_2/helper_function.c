
#include"helper_function.h"

// function #1
float generate_random_nb(float max){
// Description: generate some random number between 0 and some number = max

// here we have a floating point between 0 and 1
float result =  (float)rand()/((float)RAND_MAX);

// scale up to max as limit
result *= max;

return result;

} // End generate_random_nb()


// function #2
float add(float nb1,float nb2){

float result  = nb1 + nb2;

return result;

} // End add()

// function #3
float multiply(float nb1,float nb2){

float result  = nb1 * nb2;

return result;

} // End add()

