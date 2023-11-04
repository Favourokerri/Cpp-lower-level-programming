#include <iostream>
#include <iomanip>

/***
 * out put manipulators are used to make output
 * more user friendly
 * these functions are ccontained in the iomanip.h header file
 */

int main()
{
	std::cout<<std::setw(20)<<"hello favour\a"<< std::setw(60)<<"hope you are okay\f"<<std::endl;
	return (0);
}
