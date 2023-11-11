#include <iostream>
/**
 * program that finds the number of bytes occupied by various data types
 */

using namespace std;
int main()
{
	int a;
	char b; float c;
	long int d; bool e;
	unsigned int j;
	unsigned long k;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(e) << endl;
	cout << sizeof(j) << endl;
	cout << sizeof(k) << endl;

	return (0);
}
