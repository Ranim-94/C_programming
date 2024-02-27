
#include"string_func_demo.h"
#include<stdio.h>
#include<string.h>

void run_string_func(void){


char s1[] = "Hello C strings.";

char s2[] = "Hello C strings.";

// so far s1 and s2 content are equal

if (s1 == s2){

printf("s1 = s2 \n");
// it will never be the case since s1 and s2 are pointers
// Recall that s1[] is an array of type char
// array name are transformed into pointers

} 
else{

 printf(" s1 != s2;  s1 = %p | s2 = %p \n",s1,s2);

} // End if-else


/* If we want to know the content, we need to use functions*/

// Function 1: strcmp()
// if strings are the same -> strcmp return 0
// otherwise <0 or >0 depending on ASCII characters numeric value 

// changing content of s1 by accessing element through [] operator
s1[0] = 'R';

printf("-> #1 strcmp demo \n");

if(strcmp(s1,s2)!=0){

printf("-> s1 is different from s2 \n");

} // End if()



} // End run_string_func()