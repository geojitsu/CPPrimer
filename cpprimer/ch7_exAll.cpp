#include "stdafx.h"
#include <iostream>

using namespace std;

void ch7_ex1(void);
void ch7_ex2(void);
void ch7_ex3(int choice);
void ch7_ex4(void);
void ch7_ex5(void);
void ch7_ex6(void);
void ch7_ex7(void);
void ch7_ex8(void);
void ch7_ex9(void);
void ch7_ex10(void);
double harmony(double x, double y);
int * golfread(int arraysize);

int main(void)
{
	int chapter;

	cout << "Select exercise to debug, chump: ";

	while (cin >> chapter)
	{
		switch (chapter)
		{
			case 1: ch7_ex1(); break;
			case 2: ch7_ex2(); break;
			case 3: 
				{
					int choice;
					cout << "Pass by (1)Value or (2)Address: ";
					cin >> choice;
					ch7_ex3(choice); 
					break;
				}
			case 4: ch7_ex4(); break;
			case 5: ch7_ex5(); break;
			case 6: ch7_ex6(); break;
			case 7: ch7_ex7(); break;
			case 8: ch7_ex8(); break;
			case 9: ch7_ex9(); break;
			case 10: ch7_ex10(); break;
			case 'q':
			case 'Q': cout << "Fare thee well!\n"; break;
			default : cout << "Invalid, reselect\n";
		}
		cout << "Select next exercise to debug, merci: ";
	}	
	return 0;
}
	
	
void ch7_ex1(void)
{
	double xval, yval;
	
	cout << "Enter two values to be evaluated to harmony: ";
	while ((cin >> xval >> yval))
	{
		if (xval == 0 && yval == 0)
			break;

		double mean = harmony(xval, yval);

		cout << "Harmonic Mean: " << mean << endl;
		cout << "Bring harmony to the digits: ";
	}
}
void ch7_ex2(void)
{
	const int arsize = 10;

	int * values = golfread(arsize);

	for (int x = 0; x < arsize; x++)
		cout << "#" << x+1 << ": " << values[x] << endl;
}
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
int vshowbox(box byval);
int vshowbox(box byval)
{
	cout << "Box struct passed by value\n";
	cout << "Constructed by:\t" << byval.maker << endl
		 << "Height:\t\t" << byval.height << endl
		 << "Width:\t\t" << byval.width << endl
		 << "Length:\t\t" << byval.length << endl
		 << "Volume:\t\t" << byval.volume << endl;

	return 0;
} 
int pshowbox(const box *byaddr);
int pshowbox(const box *byaddr)
{
	cout << "Box struct passed by Pointer\n";
	cout << "Constructed by:\t" << byaddr->maker << endl
		 << "Height:\t\t" << byaddr->height << endl
		 << "Width:\t\t" << byaddr->width << endl
		 << "Length:\t\t" << byaddr->length << endl
		 << "Volume:\t\t" << byaddr->volume << endl;
	
	return 0;
}
void ch7_ex3(int choice)
{
	box mybox =
	{
		"Jipeto",
		5.7,
		13.5,
		18,
		mybox.height * mybox.width * mybox.length
	};

	if (choice == 1)
		vshowbox(mybox);
	else if (choice == 2)
		pshowbox(&mybox);
}



long double probability(unsigned numbers, unsigned picks, unsigned meganums, unsigned megapicks);
long double probability(unsigned numbers, unsigned picks, unsigned meganums, unsigned megapicks)
{
	long double result, temp;
	result = temp = 1.0;
	long double n, mnums;
	unsigned p, mpicks;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result *= n/p;

	for (mnums = meganums, mpicks = megapicks; megapicks > 0; meganums--, megapicks--)
		temp *= meganums/megapicks;

	result *= temp;

	return result;
}
void ch7_ex4(void)
{
	double total, choices, megatotal, megachoices;
	cout << "Enter the total number of choices on the game card and\n"
			"the number of picks allowed:\n";

	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "Now enter the number of Powerball choices and\n"
				"the number of picks allowed:\n";

		cin >> megatotal >> megachoices;

		cout << "You have one chance in ";
		cout << probability(total, choices, megatotal, megachoices);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
}

void factorial(int factor, int * pf);
void factorial(int factor, int * pf)
{
	int temp, result;
	*pf = *pf * factor;
	if (factor > 1)
		factorial(factor-1, pf);

	//return result;
}
void ch7_ex5(void)
{
	int factorme = 6;
	int result = 1;
	int * presult = &result;

	factorial(factorme, presult);

	cout << factorme << "! = " << *presult << endl << endl;
}

void ch7_ex6(void)
{
}
void ch7_ex7(void)
{
}
void ch7_ex8(void)
{
}
void ch7_ex9(void)
{
}
void ch7_ex10(void)
{
}


double harmony(double x, double y)
{
	return 2.0*x*y/(x+y);
}

int * golfread(const int arraysize)
{
	int * scores = new int[arraysize];
	
	cout << "Enter golf scores to be crunched\n#1: ";

	for (int loop = 0; loop < arraysize && cin >> scores[loop]; ++loop)
		cout << "#" << loop+1 << ": ";

	return scores;
}