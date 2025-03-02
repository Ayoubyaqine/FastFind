#include <stdio.h>
#include <stdlib.h>
#include "search.h"

int* create_dynamic_array(int min_value, int max_value)
{
    if (min_value>max_value) // Check for invalid range
    {
        return NULL;
    }
    int* array =(int*)malloc((max_value-min_value+1)*sizeof(int)); // Allocate memory for the array
    if (array == NULL) // Check if memory allocation failed
    {
        return NULL;
    }
    array[0]=min_value; // Initialize first element
    for (int i=1;i<max_value-min_value+1;i++) // Fill the array with consecutive numbers
    {
        array[i]=array[i-1]+1;
    }
    return array;
}

int pickRandomNumber(int min_value, int max_value)
{
    int RandomNumber;
    RandomNumber = min_value + rand() % (max_value - min_value + 1); // Generate a random number in range
    printf("The Random Number picked is : %d\n",RandomNumber);
    return RandomNumber;
}

int simple_search(int array[], int min_value, int max_value, int target)
{
    if (max_value<min_value) // Invalid range check
    {
        return -1;
    }
    int size;
    size= max_value-min_value+1;
    int tryCount=0;
    for (int i=0;i<size;i++)
    {
        tryCount++;
        if(target==array[i]) // Target found
        {
            printf("The target is: %d\n", array[i]);
            printf("The number of attempts is: %d\n", tryCount);
            return i;
        }
    }
    return -1; // Target not found
}

int binary_search(int array[], int min_value, int max_value, int target)
{
    if (max_value<min_value) // Invalid range check
    {
        return -1;
    }
    int tryCount=0;
    int left;
    int right; 
    int mid;
    left=0; // First index
    right=max_value-min_value; // Last index
    while(left<=right)
    {
        tryCount++;
        mid=left+(right-left)/2; // Compute middle index
        if (target==array[mid]) // Target found
        {
            printf("The target is: %d\n", array[mid]);
            printf("The number of attempts is: %d\n", tryCount);
            return mid;
        }
        else if (array[mid]>target) // Search left half
        {
            right=mid-1;
        }
        else // Search right half
        {
            left=mid+1;
        }
    }
    return -1; // Target not found
}