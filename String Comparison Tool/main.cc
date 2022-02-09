#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;
    string str2;

    cout << "Please input the first string: " << endl;
    cout << "---------------------------------------------------------" << endl;
    getline(cin, str1);
    cout << "---------------------------------------------------------" << endl;

    cout << "Please input the second string: " << endl;
    cout << "---------------------------------------------------------" << endl;
    getline(cin, str2);
    cout << "---------------------------------------------------------" << endl;


    if (str1 == str2) {
        cout << "The two strings are equal." << endl;
    } else {
        int i = 0;
        cout << "The two strings does not match. They are the same until:" << endl;
        cout << "---------------------------------------------------------" << endl;

        while (str1[i] == str2[i]) {
            cout << str1[i];
            ++i;
        } 

        cout << "The two string differ after " << i << "characters." << endl;

        cout << "---------------------------------------------------------" << endl;
    }

    return 0;
}
