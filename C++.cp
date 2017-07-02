#include <iostream>
using namespace std;
// Euclid's Algorithm
// For 2 integers u and v, if u > v, then the greatest common divisor between u and v is the greatest common divisor between (u - v) and v

// 对于两个数u和v，如果 u > v
// 那么u和v的最大公约数（Greatest Common Divisor）就是 (u - v) 和 v 的最大公约数


int greatestCommonDivisor (int u, int v) {
    
    int temp;
    
    while (u > 0){
        if (u < v) {
            temp = u;
            u = v;
            v = temp;
        }
        u = u - v;
    }
    
    return v;
}

