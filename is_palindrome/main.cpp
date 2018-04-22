#include <cassert>
#include <string>


// is_palindrome(s) returns true if s is palindrome, false otherwise
// requires: s is valid string
// time: O(n) where n = strlen(s)
bool is_palindrome(const char *s) {
    assert(s);
    int end = strlen(s);
    int front = 0;
    while (front < end) {
        if (s[front] != s[end]) {
            return false;
        }
        front++;
        end--;
    }
    return true;
}
