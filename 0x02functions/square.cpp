#include <iostream>
/**
 * a function that prints the quare of a number
 */

double square(double x)
{
	return x*x;
}

int main()
{
	int num = 4;
	double ans = square(num);
	std::cout<<"The square of "<<num <<" is "<< ans;

}

