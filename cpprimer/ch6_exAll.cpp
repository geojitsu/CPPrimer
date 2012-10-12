#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>
#include <cstring>
#include <cctype>

void ch6_ex1(void);
void ch6_ex2(void);
void ch6_ex3(void);
void ch6_ex4(void);
void ch6_ex5(void);
void ch6_ex6(void);
void ch6_ex7(void);
void ch6_ex8(void);
void ch6_ex9(void);
void ch6_ex10(void);

using namespace std;
const int ArSize = 250;
int judge(int (*ps)(const char *));


int main ()
{
	int chapter;

	
	cout << "Por Favore, Select a chapter exercise to debug: ";
	
	while (cin >> chapter)
	{
		switch (chapter)
		{
			case 1 : ch6_ex1(); break;
			case 2 : ch6_ex2(); break;
			case 3 : ch6_ex3(); break;
			case 4 : ch6_ex4(); break;
			case 5 : ch6_ex5(); break;
			case 6 : ch6_ex6(); break;
			case 7 : ch6_ex7(); break;
			case 8 : ch6_ex8(); break;
			case 9 : ch6_ex9(); break;
			case 10 : ch6_ex10(); break;
			default : cout << "Invalid selection, enter exercise #: "; break;
		}
		cout << "Select another exercise to debug: ";
	}
}

void ch6_ex1(void)
{

	char ch;

	cout << "Enter alphanumeric text <terminate pressing '@' key>\n";
	cin.get();
	while ((cin.get(ch)) && ch != '@')
		if (!isdigit(ch))
		{
			if (isupper((int) ch))
				ch = tolower(ch);
			else if (islower((int) ch))
				ch = toupper(ch);
			cout << ch;
		}
		
		cout << endl;
}

void ch6_ex2(void)
{
	const int numOfDonations = 10;
	double donations[numOfDonations] = {0.0};
	double *donate = new double[numOfDonations];
	double sum = 0.0;
	int x = 0;

	*(donate) = 0.0;
	*(donate+1) = 3.4;
	cout << &donate << endl;
	for (int x = 0; x < numOfDonations; x++)
		cout << *(donate+x) << " is at address " << (double *) &donate+x << endl;
	for (int x = 0; x < numOfDonations; x++)	
		cout << "While " << donations[x] << " is at address " << &donations+x << endl;
	
		
	cout << "Enter " << numOfDonations << " donations of those kind citizens\n";

	for (; x < numOfDonations && cout << "Donation #" << x+1 << ": " && cin >> donations[x]; x++)
		sum += donations[x];
		
	cout << endl;

	cout << "The Average Donation was $" << (sum / x) << endl
		 << "The following donations wetre greater then the median and deserve praise\nCan I get a whiiitness\n";
	
	for (int y = 0; y < numOfDonations; y++)
	{
		if ( donations[y] > (sum / x) )
			cout << "Donation from Participant #" << y << " " << donations[y] << endl;
	}
	cout << endl;
}
void ch6_ex3(void)
{
	char choice;
	
	cout << "Please enter one of the following choices:\n"
		 << "c) carnivore\t\tp) pianist\n"
		 << "t) tree\t\t\tg) game\n";
	
	while (cin >> choice)
	{
		switch (choice)
		{
			case 'c': 
			{
				cout << "Carnivores unite against the omnivore heathens!\n";
				break;
			}
			case 'p':
			{
				cout << "Pianist rhymes with....?\n";
				break;
			}
			case 't':
			{
				cout << "A Maple is a sto-o-ory\n";
				break;
			}
			case 'g':
			{
				cout << "Hail to the redskins, hail victory\n";
				break;
			}
			default:
			{
				cout << "Please enter a c, p, t, or g: ";
			}
		}
	}
	cout << endl;
}
void ch6_ex4(void)
{
	char select;
	const int strsize = 50;
	struct bop {
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference;
	};

	bop *boparr = new bop[3];
	bop bopargh[3] =
	{ 
		{ "John Bopkins", "CEO Of Bopping", "Sir Bopsalot",	0 },
		{ "Joe Boppie", "President in Arms", "Ehhhhh!", 2 },
		{ "Lou Bop Menotti III", "Commander in Bop", "Mister Bop", 1}
	};

	cout << "Benevolent Order of Programmers Report\n"
		 << "a. display by name\t\tb. display by title\n"
		 << "c. display by bopname\td. display by preference\n"
		 << "q. quit\n"
	     << "Enter your choice: ";

	while ((cin >> select) && select != 'q')
	{
		switch (select)
		{
			case 'A':
			case 'a':
			{
				for (int x = 0; x < 3; x++)
					cout << bopargh[x].fullname << endl;
				break;
			}
			case 'B':
			case 'b':
			{
				for (int x = 0; x < 3; x++)
					cout << bopargh[x].title << endl;
				break;
			}
			case 'C':
			case 'c':
			{
				for (int x = 0; x < 3; x++)
					cout << bopargh[x].bopname << endl;
				break;
			}
			case 'D':
			case 'd':
			{
				for (int x = 0; x < 3; x++)
				{
					if (bopargh[x].preference == 0)
						cout << bopargh[x].fullname << endl;
					else if (bopargh[x].preference == 1)
						cout << bopargh[x].title << endl;
					else if (bopargh[x].preference == 2)
						cout << bopargh[x].bopname << endl;
				}
				break;
			}
			case 'Q':
			case 'q':
			{
				cout << "Bye!\n";
				break;
			}
			default:
				cout << "Please select between the choices: ";
		}
		cout << "Next choice: ";
	}
	cout << endl;
}
void ch6_ex5(void)
{

}
void ch6_ex6(void)
{

}
void ch6_ex7(void)
{

}
void ch6_ex8(void)
{

}
void ch6_ex9(void)
{

}
void ch6_ex10(void)
{

}


