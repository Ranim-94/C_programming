
#include"char_ptr.h"

#include<stdio.h>
#include<string.h> // to use strlen(), and other C strings functions

/*
    Goal: hilight differences between char* and char[]
*/

void run_char_ptr(void){


// declaring a string literal using array <-> []
char s1[] = "abcdef";

char* s2_ptr = "hello";

// displaying entire string
printf("\n --> Printing my entire string s1[] = %s \n",s1);

printf("\n --> Printing my entire string s2_ptr (ptr declar) = %s \n",s2_ptr);

printf("\n --> size of string s1[] = %ld bytes \n",sizeof(s1));
// 7 bytes because
// s1[] is of type array
// 1 byte per char -> 7 bytes

printf("\n --> size of string s2_ptr (ptr declar) = %ld bytes \n",sizeof(s2_ptr));

// assinging a new string to s2_ptr
s2_ptr = "hello my new string";
// this is a longer string <-> so logically a bigger memory

printf("\n --> Printing my entire string s2_ptr after assignment (ptr declar) = %s \n",s2_ptr);

printf("\n --> size of string s2_ptr  after assignment(ptr declar) = %ld bytes \n",sizeof(s2_ptr));
// it will also give 8 byte


} // End run_char_ptr()