#include <iostream>
using namespace std;

int main()
{
	int number, factorial;
	factorial = 1;
	cout<<"Enter the number of factorial";
	cin >> number;
	while (number >=1)
	{
		cout << "Number="<<number <<endl;
		factorial = factorial * number;
		number = number - 1;
	}
	cout <<"Factorial is="<<factorial<<endl;

	return (0);
}
