#include "stdafx.h"
#include <iostream>
#include "ch10ex2_h.h"

int main()
{
	static const int PERINT = 3;
	Person a, b, c;
	Person * x[PERINT] = { &b, &c };

	x[0]->Show();
	*x[0] = Person("Doten", "Monsta");
	*x[1] = Person("Poll");
	x[0]->Show();
	x[1]->Show();

	a = Person("Bate", "Nick");

	a.Show();

	std::cin.get();

	return 0;
}