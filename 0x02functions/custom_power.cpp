#include <iostream>

double my_power(int x, int y)
{
	double result = 1;
	for(int i=0; i < y; i++)
	{
		result = result * x;
	}
	return result;

}

int main(void)
{
	int base, exponet;
	std::cout << "base: ";
	std::cin >> base;
	std::cout << "exponet: ";
	std::cin >> exponet;

	double x = my_power(base, exponet);
	std::cout << x;
}
