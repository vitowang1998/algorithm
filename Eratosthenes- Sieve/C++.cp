// Eratosthenes' Sieve
// Extremely inefficient

// This function is used to test if a positive integer is a prime number
bool Eratosthenes(int value){
    int testdivisor;
    
    if (value == 1){
        return false;
    }
    
    for (testdivisor = 2; testdivisor * testdivisor <= value; ++testdivisor){
        if (value % testdivisor == 0){
            return false;
        }
    }
    
    return true;
}
