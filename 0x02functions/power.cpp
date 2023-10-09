#include <iostream>
#include <cmath>

int main()
{
	int base, exponet;
	int ans;

	std::cout << "enter base: ";
	std::cin >> base;
	std::cout << "enter exponet: ";
	std::cin >> exponet;

	ans = pow(base, exponet);
	std::cout << base << " to the power of " << exponet << " is = " << ans << "\n";
}
