#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int ArSize = 20;

void strcount(string str);

int main()
{
	string input;

	cout << "Enter a line:\n";
	
	getline(cin, input);

	
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
}

void strcount(string str)
{
	using namespace std;
	static int total = 0;

	total += str.size();
	cout << str.size() << " characters\n";
	cout << total << " characters total\n";
}