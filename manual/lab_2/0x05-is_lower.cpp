#include <iostream>
using namespace std;

int main() {
    char letter;

    // Prompt user to enter a letter
    cout << "Enter a letter: ";
    cin >> letter;

    // Check if the entered character is a lowercase letter
    if (islower(letter)) {
        cout << "The entered letter is a lowercase letter." << endl;
    }
    // Check if the entered character is an uppercase letter
    else if (isupper(letter)) {
        cout << "The entered letter is an uppercase letter." << endl;
    }
    // If the entered character is not a letter
    else {
        cout << "The entered character is not a letter." << endl;
    }

    return 0;
}

