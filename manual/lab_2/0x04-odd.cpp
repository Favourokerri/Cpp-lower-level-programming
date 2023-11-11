#include "iostream"
/**
 * takes number from user and displays if odd or even
 */

using namespace std;

int main()
{
	int num = 0;

	cout << "please enter integer: ";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "this is an even number" << endl;
	}
	else
	{
		cout << " this is an odd number" << endl;
	}
	return (0);
}
