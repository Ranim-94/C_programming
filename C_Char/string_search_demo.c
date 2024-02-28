
#include"string_search_demo.h"
#include<stdio.h>
#include<string.h>

void run_string_search(void){


printf("\n ########### Start search function in C Strings ########### \n");

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

// ============================= strcmp() =============================
printf("\n========= #1-strcmp() demo =========\n");
// Function 1: strcmp()
// if strings are the same -> strcmp return 0
// otherwise <0 or >0 depending on ASCII characters numeric value 

// changing content of s1 by accessing element through [] operator
s1[0] = 'R';

printf("-> #1 strcmp demo \n");

if(strcmp(s1,s2)!=0){

printf("-> s1 is different from s2 \n");

} // End if()

// ============================= strcmp() =============================

// Function 2: strpbrk()
printf("\n========= #2-strpbrk() demo =========\n");

const char* str1 = "This b is a test.";
char str2[] = "beware";

// call the function
char* substring = strpbrk(str1,str2);
/*
    - strpbrk searches for char in str1 (search field), in any occurence 
    in str2
    - if some occurence is found, we get a pointer to the 1st occurence (a substring)

*/
printf("\n --> strpbrk demo: occurence in str1 = %s \n",substring);

// ============================= strcmp() =============================

printf("\n========= #3-strchr() demo =========\n");

// Function 2: strpbrk()

str1 = "A zoo can have a zebra";
char to_be_search = 'z'; // we are searching for this char in str1[]

// call the function
substring = strchr(str1,to_be_search);
/*
    - strchr search for the last occurence (so opposite to strpbrk()) in str1
    - if some occurence is found, we get a pointer to the 1st occurence (a substring)

*/
printf("\n --> strchr demo: substring result after search in str1 = %s \n",substring);



} // End run_string_func()