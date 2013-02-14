#include "stdafx.h"
#include <iostream>
#include "sales.h"

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		int i = 0;
	
		s.min = ar[i];
		s.max = ar[i];
		s.average = 0;

		for (; i < SALES::QUARTERS; i++)
		{
			if (i < n)
			{
				s.sales[i] = ar[i];
				s.average += s.sales[i];
			
				s.min = ((s.min <= s.sales[i]) ? s.min : ar[i]);
				s.max = ((s.max >= s.sales[i]) ? s.max : ar[i]);
			}
			else			
				s.sales[i] = 0;
		}
		s.average /= n;
	}

	void setSales(Sales & s)
	{
		using std::cin;
		using std::cout;
		using std::endl;

		int i = 0;

		cout << "Sales figure " << i+1 << ": ";
		cin >> s.sales[i];
		s.min = s.max = s.average = s.sales[i];
		for (i++; i < QUARTERS; i++)
		{
			cout << "Sales figure " << i+1 << ": ";
			cin >> s.sales[i];
			
			if (s.sales[i] == 0)
				break;
			if (!cin)
				{
					s.sales[i] = 0;
					break;
				}
				  //cin.clear();
				

			s.min = ((s.min <= s.sales[i]) ? s.min : s.sales[i]);
			s.max = ((s.max >= s.sales[i]) ? s.max : s.sales[i]);
			s.average += s.sales[i];
		}
		s.average /= i;
	}

	void showSales(const Sales & s)
	{
		using std::cout;
		using std::endl;

		cout << "Reporting individual sales figures: ";
	
		for (int i = 0; i < SALES::QUARTERS && s.sales[i] != 0; i++)
			cout << s.sales[i] << " ";

		cout << endl << "Low sale: " << s.min;
		cout << endl << "High sale: " << s.max;
		cout << endl << "Mean Sale: " << s.average << endl;

	}
}