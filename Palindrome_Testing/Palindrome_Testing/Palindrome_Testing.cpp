#include <string>
#include <iostream>
#include "Pstring.h"
using namespace std;


int main()
{
	string test_str;
	//get the input from the user
	cout << "Enter the string to test with no spaces: ";
	getline(cin, test_str);
	system("cls");


	Pstring str(test_str);
	//display the message whether the string is a palindrome
	if (str.isPalindrome())
		cout << "Yes, this string is a palindrome!";
	else
		cout << "No, this string is not a palindrome.";

	cout << endl << endl;
	system("pause");
    return 0;
}

