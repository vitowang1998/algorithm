// Quick-find Algorithm

#include <iostream>

using namespace std;



int main()
{
    // "N" is the number of objects in the connectivity problem.
    int N;
    cin >> N;
    
    // "i" is index
    // "p" is the first object that is connected
    // "q" is the second object that is connected
    // "p" and "q" are connected if and only if connect[p] = connect[q]
    int i, p, q, connect[N];
    
    
    // Initialize
    for (i = 0; i < N; i++)
    {
        // All the objects are not connected at the beginning
        connect[i] = i;
    }
    
    
    
    // Each time we read in two objects
    while (cin >> p >> q)
    {
        // Declare a temp variable
        // The value of this variable is the index of the first object
        int temp = connect[p];
        
        
        // If the first and second object are connected before this operation,
        if (temp == connect[q])
        {
            // then we will jump out of the loop right away
            continue;
        }
        
        
        
        // If the first and second object are not connected before this operation,
        // all the objects connected to the first object (and the first object) will be connected to the second object.
        for (int i2 = 0; i2 < N; i2++)
        {
            if (connect[i2] == temp)
            {
                connect[i2] == connect[q];
            }
        }
    }
    
    return 0;
}
