#include <iostream>
using namespace std;

int main()
{
	int sum, number;
	sum = 0;
	number = 1;
	while(number <= 10)
	{
		sum = sum + number;
		number = number + 1;
		cout << "NUmber=" << number<<endl;
	}
	cout << "The sum of the first 10 integers starting fro  1 is =" << sum << endl;
	return 0;
}
