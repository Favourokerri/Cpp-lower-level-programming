#include <iostream>
#include <cctype> // for tolower

/**
 * determine if a letter is vowel or not
 */

using namespace std;
int main()
{
	char vowel[] = {'a', 'e', 'i', 'o', 'u'};
	char letter;
	bool is_vowel = false;

	cout << "enter alphabet: ";
	cin >> letter;
	letter = tolower(letter);

	for (int i=0; i < 5; i++)
	{
		if (letter == vowel[i])
		{
			cout << letter << " is a vowel\a "<< endl;
			is_vowel = true;
			break;
		}
	}

	if (!is_vowel)
	{
		cout << letter << " is a consonant" << endl;
	}
	return (0);
}

