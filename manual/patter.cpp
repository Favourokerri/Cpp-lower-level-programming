#include <iostream>

int main()
{
	int lines = 11;

	for(int i =0; i < lines; i++)
	{
		for (int j=0; j<3; j++)
		{	
			std::cout << "*";
		}
		std::cout <<"\t\t\t";

		for (int j=0; j<3; j++)
                {
                        std::cout << "*";
                }
		std::cout <<"\n";
	}

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<31; j++)
		{
			std::cout<<"#";
		}
		std::cout<<"\n";
	}
	return (0);
}
