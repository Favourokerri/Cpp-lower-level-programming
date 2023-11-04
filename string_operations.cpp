#include <iostream>
#include <string>

/**
* name: okerri favour
* mat_no: u2021/5570018
*/
int main() {
    // Declare and initialize strings
    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    std::string result;

    // Concatenation
    result = str1 + str2;
    std::cout << "Concatenation: " << result << std::endl;

    // Length of a string
    std::cout << "Length of str1: " << str1.length() << std::endl;

    // Accessing characters in a string
    char character = str1[0];
    std::cout << "First character of str1: " << character << std::endl;

    // Substring
    std::string sub = str1.substr(0, 5);  // Get the first 5 characters
    std::cout << "Substring of str1: " << sub << std::endl;

    // Find a substring within a string
    size_t found = str1.find("lo");
    if (found != std::string::npos) {
        std::cout << "Substring 'lo' found in str1 at index " << found << std::endl;
    } else {
        std::cout << "Substring 'lo' not found in str1" << std::endl;
    }

    // Replace a substring
    str1.replace(0, 5, "Hi, ");
    std::cout << "After replacement: " << str1 << std::endl;

    // Compare strings
    if (str1 == str2) {
        std::cout << "str1 and str2 are equal." << std::endl;
    } else {
        std::cout << "str1 and str2 are not equal." << std::endl;
    }

    // Convert string to C-style character array
    const char* cstr = str1.c_str();
    std::cout << "C-style character array: " << cstr << std::endl;

    return 0;
}


