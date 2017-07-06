#include <iostream>
using namespace std;


// If we use selection sort to sort an array, we will find the smallest value in this array and allocate it to the first index, the second smallest value to the second index, etc.
int* SelectionSort(int array[], int size)
{
    // We will execute this loop for "size" times.
    for (int i = 0; i < size; i++)
    {
        // Assign an integer variable "index"
        // This variable will be assigned the value of i at first
        int index = i;
        
        
        
        // Use a for loop to compare the every member in this array
        for (int j = i + 1; j < size; j++)
        {
            // After this loop, the integer "index" should be the index value of the smallest integer in the array
            if (array[index] > array[j])
            {
                index = j;
            }
        }
        
        // If the index does not equal to i, which means that the first index in the scope that we are currently handling is not the smallest, then we need to swap it with the smallest value
        // If the index happens to be equal to i, which means that the first index in the scope that we are currently handling is exactly the smallest, then we don't need to do any modification to the array at all
        if (i != index)
        {
            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
        
    }
    // This will return a pointer to the sorted array
    // In order to do further implementation on this array, we can declare a
    // int* arrayname = SelectionSort(array, size);
    // Thus, this "arrayname" will be the sorted array
    return array;
}

