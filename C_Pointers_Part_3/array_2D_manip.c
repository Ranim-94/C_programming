
#include "array_2D_manip.h"


void print_2D_array(int* array,int nb_row, int nb_col){

    for (int i = 0; i< nb_row ; i++) {

    for (int j = 0; j< nb_col ; j++){
        printf("%d \t",array[i*nb_col+j]);

    } // End columns

    printf("\n"); // take a new line after finishing 1 row

} // End for rows




} // End function print_2D_array()