#include <iostream>
#include <cassert>

using namespace std;

// quick_find(num_of_cities) connects cities together pair by pair
// requires: num_of_cities > 0;
//           input are valid
// effects: allocates memory (need to be manually released)
// time: O(mn) where m is the size of input and n is the num of cities
int* quick_find(int num_of_cities) {
    assert(num_of_cities > 0);
    cout << "Please enter the number of cities in the question: ";
    cin >> num_of_cities;
    
    int first_city_index = 0;
    int second_city_index = 0;
    int *connect;
    connect = (int*) malloc(num_of_cities * sizeof(int));
    int temp = 0;
    
    // initialize the array
    for (int i = 0; i < num_of_cities; i++) {
        connect[i] = i;
    }
    
    while (cin >> first_city_index >> second_city_index) {
        assert(first_city_index < num_of_cities);
        assert(second_city_index < num_of_cities);
        temp = connect[first_city_index];
        if (temp == connect[second_city_index]) {
            continue;
        } else {
            for (int i = 0; i < num_of_cities; i++) {
                if (connect[i] == temp) {
                    connect[i] = connect[second_city_index];
                }
            }
        }
    }
    return connect;
}

// check_if_connected(*connect, first_city_index, second_city_index) returns
//      true if the first city and the second city are connected, false
//      otherwise.
// requires: *connect is valid pointer
//           first_city_index, second_city_index < n where n is len of connect
// time: O(1)
bool check_if_connected(int *connect, int first_city_index, int second_city_index) {
    assert(connect);
    if (connect[first_city_index] == connect[second_city_index]) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
}
