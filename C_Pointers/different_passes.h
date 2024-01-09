#pragma once
#include<stdio.h>

// main function in different_passes.c
void run_different_passes(void);

// helper functions
void set_value(float some_value);

void set_value_ptr(float* some_value);

void increment(float* some_value);

void increment_arr(float* some_arr, size_t array_size);