#include <iostream>
using namespace std;

// This function will print all the prime number less than a given integer
// n >= 2
// This is an advanced version of the Sieve of Eratosthenes

// We use an array to denote the primality of a number, if array[i] = 1, then i is a prime number
// if array[i] = 0, then i is a composite number

// Due to the limitation of an int variable, n cannot be larger than

void printPrimeNumber(int n)
{
    // If the given number is within the domain
    if (n >= 2){
        
        // Declaration of index variables
        int i, j;
        
        // Declare the length of the array to be n + 1
        // In this case, the smallest index is 0, the largest index is n
        int array[n + 1];
        array[1] = 0;
        
        
        // Use a for loop to set all numbers as prime numbers
        for (i = 2; i <= n; i++)
        {
            array[i] = 1;
        }
        
        
        
        // For every integer starts from 2 to half of n
        for (i = 2; i <= n / 2; i++)
        {
            // For any integer starts from 2 to n / i
            for (j = 2; j <= n / i; j++)
            {
                // If a number can be denoted as the product of i and j, it cannot be a prime number since it has more than 2 multipliers
                array[i * j] = 0;
    
            }
        }
        
        
        
        // print all the prime numbers less than n
        for (i = 2; i <= n; i++)
        {
            // If the value stored in the array is 1, which means that it is a prime number
            if (array[i])
            {
                cout << i << " ";
            }
        }
    
    }
    else
    {
        cout << "Domain Error";
    }
    
}
