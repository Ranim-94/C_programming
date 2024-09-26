

#pragma once

#include <stdio.h>

void print_2D_array(int* array,int nb_row,int nb_col);

void generate_random_2D_array(float** array_ptr,size_t row_size,
			size_t column_size, float max_limit);

void print_2D_heap_array(float** array,int nb_row, int nb_col);
