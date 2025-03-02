#ifndef SEARCH_H
#define SEARCH_H

int* create_dynamic_array(int min_value, int max_value); // Creates a dynamic array from min_value to max_value
int pickRandomNumber(int min_value, int max_value); // Generates a random number in [min_value, max_value]
int simple_search(int array[], int min_value, int max_value, int target); // Linear search, returns index or -1
int binary_search(int array[], int min_value, int max_value, int target); // Binary search, returns index or -1

#endif