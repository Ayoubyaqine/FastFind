#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"

int main()
{
    int min_value=-600;
    int max_value=500;
    int* array;
    array = create_dynamic_array(min_value, max_value);
    if (array==NULL) // Check if memory allocation failed
    {
        return EXIT_FAILURE;
    }

    srand(time(NULL)); // Seed the random number generator with the current time
    int target;
    target = pickRandomNumber(min_value,max_value); // Generate a random target number

    printf("\n--- Simple Search ---\n");
    int simple_index;
    simple_index=simple_search(array, min_value, max_value, target);
    if (simple_index==-1) // Check if target was not found
    {
        return EXIT_FAILURE;
    }

    printf("\n--- Binary Search ---\n");
    int binary_index;
    binary_index=binary_search(array, min_value, max_value, target);
    if (binary_index==-1) // Check if target was not found
    {
        return EXIT_FAILURE;
    }
    
    free(array); // Free allocated memory

    return EXIT_SUCCESS;


}

