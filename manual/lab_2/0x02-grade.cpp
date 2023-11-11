#include <iostream>
/***
 * calculate the grade of a student
 */

using namespace std;
int main()
{
	double grade;

	cout << "please enter your grade: ";
	cin >> grade;

	if (grade>=70)
	{
		cout << "A";
	}
	else if (grade>=60)
	{
		cout << "B\a";
	}
	else if (grade >=50)
	{
		cout << "C\a";
	}
	else if (grade >=45)
	{
		cout << "D\a";
	}
	else if (grade >=40)
	{
		cout << "E";
	}
	else
	{
		cout << "F";
	}
	return (0);
}


