#include "stdafx.h"
#include <iostream>
#include "golf.h"


int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int gs = 3;
	golf ag[gs];

	int x = 0;
	
	while (x < gs && setgolf(ag[x]))
		x++;

	while(x--)
		cout << "Full Name: " << ag[x].fullname << endl
			 << "Handicap: " << ag[x].handicap << endl;

	cin.get();
	cin.get();
	return 0;
}