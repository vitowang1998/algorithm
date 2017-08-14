// Quick-Union Algorithm to Connectivity Problems

#include <iostream>

using namespace std;

// Every entry in the array "connect" represents an object it connects to.
// For instance, if "1" is connected to "2", then the value of "connect[1]" will be "2";
// Each object points to another object within a structure with no cycles.


int main()
{

    // "N" is the number of objects
    int N;
    cin >> N;


    int i, j, p, q, connect[N];

    // At the beginning there is no connection. So that every object point to itself.
    for(i = 0; i < N; i++)
    {
        connect[i] = i;
    }

    // Read in the objects we want to connect
    while(cin >> p >> q)
    {
        // If "i" is connected to some object else, then i will not equal to connect[i]
        // We assign the value that "i" connects to to "i"
        // If the objects are connected, they would eventually reach the same value.
        // This is a recursion
        for(i = p; i != connect[i]; i = connect[i]);
        for(j = q; j != connect[j]; j = connect[j]);


        // If the objects are pre-connected
        if(i == j)
        {
            continue;
        }

        connect[i] = j;
    }
