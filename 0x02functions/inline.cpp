#include <iostream>
using namespace std;

/***
 * inline functions are used to explicitly tell the
 * compiler to substitute a function into the program
 * instead of a function call
*/
inline add(int a, int b) {
    return a + b;
}

int main() {
    int a = 23;
    int b = 16;

    int result = add(a, b) // compiler sees [int result = 23 + 16]
    cout << " result of the above operation is: "<< result
}
