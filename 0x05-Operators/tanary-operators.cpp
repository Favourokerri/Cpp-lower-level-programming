#include <iostream>
/**
 * c++ has only one tanery operator
 * tanery operators can be seen as short form 
 * of writing if else statements
 */

int main()
{
	int x = 20;
	auto y = ((x < 10) ? 1: 0);
	std::cout << y << std::endl;

	return 0;
}
