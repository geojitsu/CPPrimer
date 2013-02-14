#include "stdafx.h"
#include <iostream>
#include "ch10ex1_funds.h"

int main()
{
	using namespace std;
	const int BNOTES = 3;
	Bank eliza[BNOTES] =
	{
		Bank("Dexter Morgan", "112233", 1.0),
		Bank("Carl Whoregan", "445566", 2.0),

	};

	eliza[2] = Bank("Yiffle McNiffle", "778899", 3.0);

	Bank elisa("Elizabeth Morgan", "674234", 4200.83);
	elisa.depositMonays(1200.17);
	elisa.withdrawMonays(1200.17);
	elisa.withdrawMonays(4200.84);

	elisa.showAccount();

	cout << endl;

	for (int i = 0; i < BNOTES; i++)
		eliza[i].showAccount();

	cin.get();

}