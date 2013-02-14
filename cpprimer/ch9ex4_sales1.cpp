#include "stdafx.h"
#include <iostream>
#include "sales.h"

int main()
{
	using namespace SALES;

	double dubAr[SALES::QUARTERS] = { 1.998, 3.72, 8.9, 0.225 };
	Sales seller, saller;
	
	SALES::setSales(seller, dubAr, 2);
	SALES::showSales(seller);

	setSales(saller);
	showSales(saller);

	while (!std::cin)
		std::cin.get();
	
	//std::cin.get();
	//std::cin.get();
	//std::cin.get();
	
	return 0;
}