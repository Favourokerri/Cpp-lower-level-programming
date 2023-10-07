#include <iostream>

int main(void)
{
	int celcius = 23;
	double farh;

	farh = (celcius * 9/5) + 32;
	std::cout<< celcius << " degree celcius is " << farh << " degree farenheit";
	return 0;
}
