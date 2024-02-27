

/*
    Content:
    1- declaring char array
        - the hardest (array with size)
        - easiest (array with no size, \0 is inserted automatically)

    2- printing elements (char and entire string)
    3- print its length
    4- modifying its content
    5- search the string to use the concept of \0

*/

#include "char_demo.h"
#include<stdio.h>
#include<string.h> // to use strlen(), and other C strings functions


void run_char_demo_1(void){

// declaring some character array
char my_char[] = "Hello"; // this is a character array
// In this type of declaration, \0 is inserted automatically
/*
    Other method:
    this equivalent to char my_char[6]; (declare the char array)
    // filling the char array
    my_char[0]='h';
    my_char[1]='e';
    my_char[2]='l';
    my_char[3]='l';
    my_char[4]='o';
    my_char[5]='\0'; -> this is the null terminator, necessary for C
    so that the compiler knows where the char array terminate

    In this method, we need to manually insert the size, and \0 character 
    (so it is not a recommended method)
*/

// displaying the content
printf("\n 1st element of my char array = %c \n",my_char[0]);
// displaying entire string
printf("\n Printing my entire string = %s \n",my_char);

printf("\n Length of the string (without the null character) = %ld \n",strlen(my_char));
// -> 5

// modifying the character array
my_char[0] = 'R';
printf("\n 1st element of my char array after modification = %c \n",my_char[0]);
// -> R

printf("\n Printing my entire string after modification = %s \n",my_char);
// -> it will print Rello (instead of Hello)


// Exercice: A nice way about working with C string is to use the \0 and not the length
// Example: print all 'l' found in my_char[]

printf("\n Exercice: find the l character in my_char[] using \\0 \n \n");

int index = 0;

while(my_char[index]!= '\0'){

if (my_char[index] == 'l')
    printf(" found l at index = %d \n", index);

// increment the index to move to next position
index++;

} // End while loop


} // End run_char_demo_1()