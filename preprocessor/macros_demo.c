

#include"macros_demo.h"
#include<stdio.h>

/*

    We have 2 type of macros:
    1- object like macros (used to define constants, some statments,...)

    2- parametrized macros -> accpet some argument

*/

// object macros
#define MAX_SIE 20 

#define print_end printf("\n End macros demo \n");

// function macros
#define inc(x) x+1  // 1 argument
// it is not allowed to have a space between the macro name and the argument
// -> inc (x) -> this lead to a compilation error

// 2 argument function macros 
#define area_triangle(base,height) 0.5*base*height


// multiline function macros
/*
    In multiline function macros: 
    1- we use {}
    2- we put \ each time we need a new line 
        (even for a blank line which contain no code)
    3- we use typeof(some_var) to make the macros generic
*/

#define max_array(input_array,len_array) ({ \
__typeof__(input_array[0]) current_max = input_array[0]; \
for(int i = 1; i < len_array ; i++) \
  if (input_array[i] > current_max) \
    current_max =  input_array[i]; \
current_max; \
})



void run_macros_func_demo(void){

printf("\n -> max size is %d",MAX_SIE);


float var1 = 2;
printf("\n -> Initial value of the variable = %.1f",var1);

// use the function macros
var1 = inc(var1);

printf("\n -> value of the variable after calling inc macro = %.1f",var1);

// function macros can be used on many data type
// -> inc(x) can be used for int, float, double <-> it is generic
// it save some memory work since there is no function call -> only text replacement

// function macros with 2 argument
// compute area of triangle
int height = 10, base = 32;

// use function macros and store the result
float triangle_surf = area_triangle(base,height);

// display result to console
printf("\n -> area of triangle = %.1f",triangle_surf);

// define some array
float some_array[] = {0.2,0.3,0.56};

float max_nb = max_array(some_array,3);

printf(" \n-> Max = %.1f ",max_nb);

print_end
// this will be replaced by the preprocessor

} // End run_macros_func_demo()