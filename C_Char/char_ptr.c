
#include"char_ptr.h"

#include<stdio.h>
#include<string.h> // to use strlen(), and other C strings functions

/*
    Goal: hilight differences between char* and char[]
*/

void run_char_ptr(void){


// declaring a string literal using array <-> []
char s1[] = "abcdef";
// s1[0] = R (we can change this since s1 is an array)

char* s2_ptr = "hello";
// if we try to do s2_ptr[0] = R
// it will give a compiler error

// displaying entire string
printf("\n --> Printing my entire string s1[] = %s \n",s1);

printf("\n --> Printing my entire string s2_ptr (ptr declar) = %s \n",s2_ptr);

printf("\n --> size of string s1[] = %ld bytes \n",sizeof(s1));
// 7 bytes because
// s1[] is of type array
// 1 byte per char -> 7 bytes

printf("\n --> size of string s2_ptr (ptr declar) = %ld bytes \n",sizeof(s2_ptr));
// -> 8 byte since s2 is a pointer

// assinging a new string to s2_ptr
s2_ptr = "hello my new string";
// this is a longer string <-> so logically a bigger memory
// note: we can't do similar operation to s1[], such as
// s1 = "other string", because s1 is an array
// we need to use function such as strncopy() or something similar


printf("\n --> Printing my entire string s2_ptr after assignment (ptr declar) = %s \n",s2_ptr);

printf("\n --> size of string s2_ptr  after assignment(ptr declar) = %ld bytes \n",sizeof(s2_ptr));
// it will also give 8 byte


} // End run_char_ptr()