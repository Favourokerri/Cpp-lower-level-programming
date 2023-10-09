#include <iostream>
/**
 * collect input from user
 * display a boolen response according
 * to users choice
 * cin--> standard inpuut stream
 * cout--> standard output stream
 */

bool accept()
{
	std::cout<<"do you accept our terms and condition y/n\n";
	char answer = 0;
	std::cin >> answer;

	if(answer == 'y')
	{
		std::cout<<"proceed to login\n";
		return true;
	}
	else if (answer == 'n')
	{
		std::cout<<"you cannot continue\n";
		return false;
	}
	else
	{
		std::cout<<"not a valid choice\n";
		return false;
	}
}

int main()
{
	accept();
}

