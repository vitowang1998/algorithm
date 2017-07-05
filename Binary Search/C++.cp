#include <iostream>
using namespace std;


// The array we pass into the function as an argument has to be sorted.
// If we have a unsorted array, we can use Quick Sort to sort it first then apply the Binary Search algorithm
int BinarySearch(int data[], int size, int value){
    // Left
    int left = 0;
    // Right
    int right = size - 1;

    
    // Algorithm
    while(left <= right) {
        // Middle value of the array
        int middle = (left + right) / 2;
        
        // If the middle value in the array is the demanded value
        if (data[middle] == value) {
            return middle;
        }
        // If the middle value in the array is greater than the demanded value, we put (middle - 1) to be the new right border of the array
        else if(data[middle] > value){
            right = middle - 1;
        }
        // If the middle value in the array is less than the demanded value, we put (middle + 1) to be the new left border of the array
        // We use "else" instead of "else if" to save RAM.
        else{
            left = middle + 1;
        }
    }
   
    // If the demanded value isn't in the array
    return -1;
}
