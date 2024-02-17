
#include"ifdef_demo.h"
#include"stdio.h"



/*
    - #ifdef and #ifndef are preprocessor statment so we can
    include or not some piece of code for compilation
        - the condition is we need to define some macros to compile or not the code

    - recall the preprocessor statements are executed before the compilation of 
    the code


*/


#define BUFFFER_SIZE 100

// macros used in order to use #ifdef and #ifndef
#define DEBUG_MODE 

// macros used in order to use #if
#define CODE_SECTION 1

#define CODE_VERSION 'a'

void run_ifdef_demo(void){

#ifdef DEBUG_MODE
// Explanation: if the preprocessor found a macro containing DEBUG_MODE
// this piece of code will be executed

    printf("\n -> We are in debug mode ! \n");

#endif

} // End run_ifdef_demo()


void run_if_demo(void){

#if CODE_SECTION == 1

printf("\n -> Working with 1st code section \n");

#elif CODE_SECTION == 2

printf("\n -> Working with 2nd code section \n");

#else

   printf("\n -> Unknown section \n");

#endif

// 2nd part of #if: using directly numbers without macros
// Rule: when constant = 0 -> code will not be included
// Any other constant different than 0 -> code will be included

#if 0

    printf("\n We are in 2nd part of #if: 0 condition \n");

#endif

#if -1
// constant != 0 -> code in this section is executed

    printf("\n We are in 2nd part of #if: -1 condition (different then 0 condition) \n");

#endif

// working with char
#if CODE_VERSION == 'a'

    printf("\n Code version is a \n");

#endif


} // run_if_demo()