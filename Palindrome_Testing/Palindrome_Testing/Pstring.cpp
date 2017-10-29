#include <iostream>
#include "Pstring.h"
#include <string>
using namespace std;

/*
This function determines if the string is a palindrome.
It finds the middle in the string and from the middle it goes to
the left and to the right one index at a time and compares chars at 
the left and at the ridht from the middle. If they match then the
string is the palindrome.
*/
bool Pstring::isPalindrome()
{
	bool pal = true;     //indicates if string is palindrome
	
	int start_r;         //right index to go to the end of the string 
	int start_l;         //left index to go to the begining of the string
	
	//if string has even number of chars
	if (length() % 2 == 0)
	{
		start_r = (this->length()) / 2;          //set right index
		start_l = start_r - 1;                   //set left index
	}
	else
	{
		start_r = ((this->length()) / 2) + 1;        //set right index
		start_l = ((this->length()) / 2) - 1;        //set left index
	}
	//iterate until mismatch found or the end of the string reached 
	while (pal && start_r < this->length())
	{
		//if chars at these locations are not equal set pal to false
		if ((*this)[start_l] != (*this)[start_r])
		{
			
			pal = false;
		}
		start_l--;     //decrement left index
		start_r++;     //increment right index
	}
	
	return pal;
}
