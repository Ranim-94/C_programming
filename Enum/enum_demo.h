


#pragma once
#include<stdio.h>

/*
 Enum are ways to create our own data type in C
 It help us make our code more readable

*/

enum Day {Monday,Tuesday,Wednesday}; 
/*
Inside the data, they are just integers
So Monday = 0, Tuesday = 1,...
*/

// we can also assing value to enum

enum Day_2ndhalf {Thursday,Friday,Saturday=20,Sunday}; 

typedef enum button {ON,OFF} Button;
// we can also use typedef with enum

void run_enum_demo(void);


// helper function used
// function which takes enum as argument
Button flip_button(Button current); 
void print_button_state(Button current);