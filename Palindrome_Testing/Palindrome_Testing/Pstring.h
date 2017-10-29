#ifndef PSTRING_H
#define PSTRING_H

#include <iostream>
#include <string>
using namespace std;

class Pstring: public string
{
public:
	Pstring(string s) : string(s) {  }
	int len() { return this->length(); }
	bool isPalindrome();
private:

};




#endif 
