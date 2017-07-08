#include <iostream>
using namespace std;

int* BubbleSort(int array[], int size) {
    int itemp;
    
    
    
    // If we want to sort out an array with n (n > 1) members, we need (n - 1) times of sorting.
    
    // i < ilength - 1 or i < iindex
    // This loop will be executed for (ilength - 1) times to sort with i starts from 0
    // so i < ilength - 1
    
    // After executing the outer for loop for the first time, the biggest number will be sorted to the last position
    // After executing the outer for loop for the second time, the second biggest number will be sorted to the second last position
    // ................
    // After executing the outer for loop for the (ilength - 2) time (the second last time), the biggest number in the 3 remaining numbers will be sorted to the third position
    // After executing the outer for loop for the (ilength - 1) time (the last time), the biggest number in the 2 remaining numbers will be sorted to the second position
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j+1])
            {
                // Swap
                itemp = array[j];
                array[j] = array[j+1];
                array[j+1] = itemp;
            }
            
        }
    }
    return array;
}
