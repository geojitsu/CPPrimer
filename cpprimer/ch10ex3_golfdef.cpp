#include "stdafx.h"
#include <iostream>
#include "ch10ex3_golf.h"

golf::golf(const char * name, int hc)
{
	int i = 0;

	for (int x=(strlen(name)); i < x; i++)
		golf::g.fullname[i] = name[i]; // could also do *(name+i)
	
	g.fullname[i] = '\0';

	g.handicap = hc;

}

golf::~golf()
{

}

golf & golf::setgolf()
{
	char tempName[Len];
	int tempHC;

	std::cout << "Enter golfer's name: ";
	if (std::cin.getline(tempName, Len))
		if (strlen(g.fullname) == 0)
		{
			std::cout << "Terminating input loop" << std::endl;
			return *this;
		}
	else 
	{
		std::cout << "And their handicap?! ";
		std::cin >> tempHC;
		std::cin.get();
	}

		return golf::golf(tempName, tempHC);

}