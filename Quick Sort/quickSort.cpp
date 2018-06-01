#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quickSortRange(int array[], int first, int last) {
    
    if (last <= first) return;
    
    int pivot = array[(last + first) / 2];
    swap(array[(last + first) / 2], array[first]);
    
    int curPos = last;
    
    for (int i = last; i > first; i--) {
        if (array[i] > pivot) {
            swap (array[curPos], array[i]);
            curPos--;
        }
    }
    swap(array[first], array[curPos]);
    quickSortRange(array, first, curPos - 1);
    quickSortRange(array, curPos + 1, last);
    
}

// quickSort: sorts an array in ascending order
// requires: array is valid, len > 0
// effects: mutate array[]
// time: O(log n)
void quickSort(int array[], int len) {
    quickSortRange(array, 0, len - 1);
}
