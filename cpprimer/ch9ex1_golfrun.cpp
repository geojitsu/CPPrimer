#include "stdafx.h"
#include <iostream>
#include "golf.h"


int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int gs = 3;
	char * gstr = "Betty Frumpernickle";
	int ghc = 49;

	golf ag[gs], sinGolf;

	setgolf(sinGolf, gstr, ghc);
	
	cout << "Full Name from setgolf(&, char *, int): " << sinGolf.fullname << endl
		 << "Handicap from setgolf(&, char*, int): " << sinGolf.handicap << endl;


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