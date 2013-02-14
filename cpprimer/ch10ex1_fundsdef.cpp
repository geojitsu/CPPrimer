#include "stdafx.h"
#include <iostream>
#include <string>
#include "ch10ex1_funds.h"

Bank::Bank()
{
	Bank::balance = 0;
	Bank::accountID = "000000";
	Bank::custName = "JP Whoregan";
}

Bank::Bank(std::string cname, std::string aid, double bal)
{
	if (bal < 0)
		std::cerr << "If your balance is negative, please apply for a high interest rate loan\n";
	else
		balance = bal;

	for (int i = 0; i < (aid.size()-1); i++)
		{
			if (!isdigit(aid[i]))	
				{
					aid[i] = '\0';
					aid[0] = '\0';
					std::cerr << "Invalid account number entered:  Only digits permitted\n";
				}
		}
		if (aid.size() > ACCSZ)
			std::cerr << "Invalid account number entered:  Too many digits\n";
		else
			accountID = aid;
	
	custName = cname;	
}

Bank::~Bank()
{

}

void Bank::depositMonays(double monays)
{
	if (monays < 0)
		std::cerr << "You can't deposite negative amounts, it defies the laws of physics\n";

	balance += monays;
}

void Bank::withdrawMonays(double monays)
{
	if ((balance - monays) < 0)
		std::cerr << "You've overdrawn, prepare to be charged an obscene penalty for this minor offense\n";
	else
		balance -= monays;
}

void Bank::showAccount(void) const
{
	using std::endl;

	std::cout << "Account Details\n  -> Account Holder: " << custName << endl
			  << "  -> Account Number: " << accountID << endl
			  << "  -> Balance: " << balance << endl;
}