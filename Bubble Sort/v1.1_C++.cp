// May be more effecient
// If the some values in the array is pre-sorted, then this may be more efficient.
// If most values in the array is pre-sorted, then this must be more efficient.


#include <iostream>
using namespace std;

int* BubbleSort(int array[], int size)
{
    // Used to swap
    int temp;
    
    // "highest" is the highest index we need to deal with in a specific loop
    // "flag" is an identifier of the sorting process. Any member in the array with index of (flag ~ size should be sorted
    int highest, index;
    // In the first time, the flag is at the highest index
    int flag = size;
    
    
    
    // If the array has not been sorted yet.
    while (flag > 0)
    {
        highest = flag;
        // If we don't need to do any arrangements, then we can say the array is sorted, so we assgin "flag" = 0
        flag = 0;
        
        
        // Since "highest = flag" and all the members after "flag" has been sorted, we can end the sorting process when index reaches to "highest"
        for (index = 0; index < highest; index++)
        {
            if (array[index] > array[index + 1])
            {
                // Swap
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                // We finished another swap and now the "flag" value is the value of "index"
                flag = index;
            }
        }
        
    }
    
    
    
    
    
    return array;


}
