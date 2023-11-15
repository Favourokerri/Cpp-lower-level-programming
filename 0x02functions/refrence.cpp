#include <iostream>
using namespace std;

/***
 * usuallly fuction called dose not 
 * affect the values of the original 
 * parameter passed to it except it is been 
 * passed by refrence like below
 */
void refrence(int &a, int b) {
	a=a+10;
	b=b+10;
}

int main() {
	int a = 1;
	int b = 1;

	refrence(a, b);
	cout << a << " and " << b << endl;
	cout << " you will find that the variable a was change but not b\n";

	return (0);
}
