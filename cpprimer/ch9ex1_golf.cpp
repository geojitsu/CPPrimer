#include "stdafx.h"
#include <iostream>
#include "golf.h"



void setgolf(golf & g, const char * name, int hc)
{
	int i = 0;
	// Optionally use -> strcpy(g.fullname, name);
	for (int x=(strlen(name)); i < x; i++)
		g.fullname[i] = name[i]; // could also do *(name+i)
	
	g.fullname[i] = '\0';

	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "Enter golfer's name: ";
	if (std::cin.getline(g.fullname, Len))
		if (strlen(g.fullname) == 0)
		{
			std::cout << "Terminating input loop" << std::endl;
			return NULL;
		}
	else 
	{
		std::cout << "And their handicap?! ";
		std::cin >> g.handicap;
		std::cin.get();
		return 1;
	}
}