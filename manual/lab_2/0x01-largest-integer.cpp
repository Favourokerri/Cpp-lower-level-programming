#include <iostream>
/***
 * accepts 3 integers from user
 * frind the largest
 */

using namespace std;
int main()
{
	int num1=0;
	int num2=0;
	int num3=0;
	int largest;

	cout <<"please enter first number: ";
	cin >> num1; 
	cout <<"please enter second number: ";
	cin >> num2;
	cout <<"please enter third number: ";
	cin >> num3;

	if(num1 > num2 && num3)
	{
		largest = num1;
	}
	if (num2 > num1 && num3)
	{
		largest = num2;
	}
	if( num3 > num1 && num2)
	{
		largest = num3;
	}
	cout << "the largest integer is \a" << largest << endl;

	return (0);
}
