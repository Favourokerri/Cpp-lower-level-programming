#include<iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    int result = 1;
    
    for (int i = num; i > 1; i--) {
        result *= i;
    }
    
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
