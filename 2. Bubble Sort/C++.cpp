#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int itemp;
    // This varible is the length of an array with ilength members
    int ilength;
    cin >> ilength;
    
    // Since there are ilength members so we declare an array with the highest index "ilength - 1"
    int ilist[ilength - 1];
    for (int iindex = 0; iindex < ilength; iindex++){
        cin >> ilist[iindex];
    }
    
    // If we want to sort out an array with n (n > 1) members, we need (n - 1) times of sorting.
    
    // i < ilength - 1 or i < iindex
    // This loop will be executed for (ilength - 1) times to sort with i starts from 0
    // so i < ilength - 1
    
    // After executing the outer for loop for the first time, the biggest number will be sorted to the last position
    // After executing the outer for loop for the second time, the second biggest number will be sorted to the second last position
    // ................
    // After executing the outer for loop for the (ilength - 2) time (the second last time), the biggest number in the 3 remaining numbers will be sorted to the third position
    // After executing the outer for loop for the (ilength - 1) time (the last time), the biggest number in the 2 remaining numbers will be sorted to the second position
    for (int i = 0; i < ilength - 1; i++){
        for (int j = 0; j < ilength - 1 - i; j++){
            if (ilist[j] > ilist[j+1]){
                // Swap
                itemp = ilist[j];
                ilist[j] = ilist[j+1];
                ilist[j+1] = itemp;
            }
                
        }
    }
    
    for (int i = 0; i < ilength; i++){
        cout << ilist[i] << endl;
    }
    
    
    return 0;
}
