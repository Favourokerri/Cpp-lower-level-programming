#include <iostream>
/**
 * a program that takes raduis from the user and calculate 
 * the area of a sphere
 */
using namespace std;

int main()
{
	double r = 0;
	double p = 3.1416;
	double Area = 0;
	cout <<"please enter radius:";
	cin >> r;
	Area = 4 * p * (r * r);
	cout << " the area for radius "<< r <<" is \a"<< Area << endl;

	return (0);
}
