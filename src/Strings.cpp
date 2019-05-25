//============================================================================
// Name        : Strings.cpp
// Author      : D_Green
// Version     :
// Copyright   : D_Green
// Description : Strings in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string name = "Dave";
	int age = 21;
	string message_1 = "learning C++";
	string message_2 = "for Uni";
	string message_3 = message_1 + " " + message_2;

	cout << "My name is " << name;
	cout << " I am " << age << " years old and am ";
	cout << message_3 << endl;

	return 0;
}
