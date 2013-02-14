#ifndef FUNDS_H
#define FUNDS_H

#include "stdafx.h"
#include <string>

class Bank
{
private:
	enum accStrSize { ACCSZ = 6 };
	std::string accountID;
	std::string custName;
	double balance;

public:
	Bank();
	Bank(std::string cname, std::string aid, double bal);
	~Bank();
	void showAccount() const;
	void depositMonays(double amount);
	void withdrawMonays(double amount);
};


#endif //FUNDS_H