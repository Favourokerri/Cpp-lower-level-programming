#include<iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, nextTerm;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    while (n > 0) {
        cout << first << " ";

        nextTerm = first + second;
        first = second;
        second = nextTerm;

        n--;
    }

    return 0;
}
