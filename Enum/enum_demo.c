



#include"enum_demo.h"

void run_enum_demo(void){

// using Enum
enum Day today = Tuesday;

// printing enum
printf("\n -> today is %d \n",today);

// using Enum
enum Day_2ndhalf today_v2 = Saturday;

// printing enum
printf("\n -> Enum value with assignment: today is %d \n",today_v2);
// this will output 20

Button power = ON;

printf("\n -> Inital button state: \n");

print_button_state(power);

printf("\n -> Pressing button \n");

// call the function , and store the new state value
power = flip_button(power);

print_button_state(power);



} // End run_enum_demo()


Button flip_button(Button current){

if  (current == ON){

    current = OFF;

} else {

// here we are in OFF state -> switch it to ON
current = ON;

} // End if else

return current;

} // End flip_button()


void print_button_state(Button current){


if  (current == ON){

    printf("\n Button state is ON \n");

} else {

printf("\n Button state is OFF \n");

} // End if else

} // End print_button_state()
