#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>


void ch5_ex1(void);
void ch5_ex2(void);
void ch5_ex3(void);
void ch5_ex4(void);
void ch5_ex5(void);
void ch5_ex6(void);
void ch5_ex7(void);
void ch5_ex8(void);
void ch5_ex9(void);
void ch5_ex10(void);

using namespace std;


int main ()
{
	int chapter;

	
	cout << "Por Favore, Select a chapter exercise to debug: ";
	
	while (cin >> chapter)
	{
		switch (chapter)
		{
			case 1 : ch5_ex1(); break;
			case 2 : ch5_ex2(); break;
			case 3 : ch5_ex3(); break;
			case 4 : ch5_ex4(); break;
			case 5 : ch5_ex5(); break;
			case 6 : ch5_ex6(); break;
			case 7 : ch5_ex7(); break;
			case 8 : ch5_ex8(); break;
			case 9 : ch5_ex9(); break;
			case 10 : ch5_ex10(); break;
			default : cout << "Invalid selection, enter exercise #: "; break;
		}
		cout << "Select another exercise to debug: ";
	}
}

void ch5_ex1(void)
{
	int min, max, total;
	min = max = total = 0;

	cout << "Initial Value: ";
	cin >> min;
	cout << "Exterior Value: ";
	cin >> max;
	total = min;

	while (min < max)
		total += ++min;
	
	cout << "The sum of the values: " << total << endl;
}

void ch5_ex2(void)
{
	const int ArSize = 101;
	array<double, ArSize> factorials;

	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i-1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
}

void ch5_ex3(void)
{
	int countr, val, sum;
	countr = val = sum = 0;
	string phrase;
	

	cout << "Step right up folks, input them values while the gettin's good <press 0 to quit>: ";
	cin.get();
	while ((cin >> val) && val != 0)
	{
		sum += val;
		cout << "Value increased to: " << sum << (phrase = (countr > 1) ? "\nAnd another!: " : "\nEnter another: ");
		
		++countr;
	}
}

void ch5_ex4(void)
{
	double d_i, c_i;
	
	c_i = 100 + (.10 * 100);
	d_i = 100 + (.05 * 100);
		
	int year = 0;

	for (;d_i < c_i; year++)
	{
		c_i += (.10 * 100);
		d_i += (.05 * d_i);
	}
	cout << "It took " << year << " years for Daphne to surpass Cloe.\n"
		 << "Daphne earned: " << d_i << "\t\t" << "Cloe earned: " << c_i << endl;

}

void ch5_ex5(void)
{
	const int fullYear = 12;
	char * months[fullYear] = {
		"January",
		"Februrary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sales[fullYear];

	for(int x = 0; x < fullYear; x++)
	{
		cout << "C++ For Fools Monthly Sales Figures for " << *(months+x) << ": ";
		cin >> sales[x];
	}
	int sum = 0;
	for(int x = 0; x < fullYear; x++)
		sum += sales[x];

	cout << "Total Sales for current year " << sum << endl;

}

void ch5_ex6(void)
{
	const int fullYear = 12;
	char * months[fullYear] = {
		"January",
		"Februrary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sales[3][fullYear];

	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < fullYear; y++)
		{
			cout << "Year 200" << x << ", C++ For Fools Monthly Sales Figures for " << *(months+y) << ": ";
			cin >> sales[x][y];
		}
	}
	int sum = 0;
	for(int x = 0; x < 3; x++)
		for(int y = 0; y < fullYear; y++)
			sum += sales[x][y];

	cout << "Total Sales for all Time " << sum << endl;
}

void ch5_ex7(void)
{
	struct car
	{
		char make[50];
		int year;
	};

	int carCount;
	
	cout << "Number of vehicles to input into system: ";
	cin >> carCount;

	car *pcars = new car[carCount];

	for(int count = 0; count < carCount; count++)
	{
		cout << "Enter vehicle #" << count+1 << "\n\n";
		cout << "Make:\t\t";
		cin.get();
		cin.getline(pcars[count].make, 50);
		cout << "Year:\t\t";
		cin >> pcars[count].year;
	}

	cout << "Your impressive collection...\n";

	for(int count = 0; count < carCount; count++)
		cout << pcars[count].year << "\t\t" << pcars[count].make << endl;
	

	delete [] pcars;
}

void ch5_ex8(void)
{
	char doneSon[200];
	char *done = "done";
	int count = 0;

	cout << "Enter words (to stop, type the word done):\n";
	cin >> doneSon;
	while (strcmp(doneSon,done))
	{
		cin >> doneSon;
		count++;
	}
	
	cout << "Total Number of words: " << count << endl;

}

void ch5_ex9(void)
{
}

void ch5_ex10(void)
{
	int rows, asterix, dots;

	cout << "How many rows do you want, man?";
	cin >> rows;
	dots = rows;
	asterix = 0;

	while (dots > 0)
	{
		--dots;
		++asterix;
		
		for (int looperz = dots; looperz > 0; looperz--)
			cout << ".";
		for (int loopers = 0; loopers < asterix; loopers++)
			cout << "*";
		cout << "\n";
	}
}