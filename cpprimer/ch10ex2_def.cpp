#include "stdafx.h"
#include <iostream>
#include "ch10ex2_h.h"

Person::Person(const string & ln, const char * fn)
{
	lname = ln;

	int i = 0;

	while (i < LIMIT && fn[i] != NULL)
			fname[i++] = fn[i];
	fname[i] = '\0';
	
	//while (i < LIMIT)
	//	fname[i++] = '\0';

}

void Person::Show() const
{
	if (fname[0] == '\0' || !strcmp(fname, "Heyyou"))
	{
		if (lname[0] == '\0')
		{
			std::cerr << "No name associated with this object\n";
		}
		else
			std::cout << "Hi Mr(s): " << lname << std::endl;
	}
	else
		std::cout << "Full Name: " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{

}