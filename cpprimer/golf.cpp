#include "stdafx.h"
#include <iostream>
#include "golf.h"



void setgolf(golf & g, const char * name, int hc)
{
	g.fullname[Len] = *(name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "Enter golfer's name: ";
	if (std::cin.getline(g.fullname, Len))
		if (strlen(g.fullname) == 0)
		{
			std::cout << "Terminating input loop" << std::endl;
			return 0;
		}
	else 
	{
		std::cout << "And their handicap?! ";
		std::cin >> g.handicap;
		std::cin.get();
		return 1;
	}
}