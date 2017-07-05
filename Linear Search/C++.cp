#include <iostream>
using namespace std;

int linearSearch(int data[], int size, int value){
    // This is the index of the value in the array
    int index;
    
    for (index = 0; index < size; index++) {
        if (value == data[index]){
            return index;
        }
    }
    
    // If the demanded value isn't in the array
    return -1;
}
