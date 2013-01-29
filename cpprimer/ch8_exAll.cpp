#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <string>


void ch8_ex1(void);
void ch8_ex2(void);
void ch8_ex3(void);
void ch8_ex4(void);
void ch8_ex5(void);
void ch8_ex6(void);
void ch8_ex7(void);

using namespace std;

int main () 
{
	
	char count;

	while ((cin >> count).get() && count != 'q')
	{
		switch (count)
		{
		case '1': ch8_ex1(); break;
		case '2': ch8_ex2(); break;
		case '3': ch8_ex3(); break;
		case '4': ch8_ex4(); break;
		case '5': ch8_ex5(); break;
		case '6': ch8_ex6(); break;
		case '7': ch8_ex7(); break;
		default: cout << "Invalid selection, try again <q to quit>: ";
	
		}
	}

	return 0;
}

int & strings(char * x, int & y);
int & strings(char * x, int & y)
{
	
	if (y > 0 || y < 0)
	{
		for (int loop = 0; loop < (y+1); loop++)
		{
			cout << x << endl;
		}
	}
	else
		cout << x << endl;

	return ++y;
}

void ch8_ex1(void)
{
	char * strCheese = "Farfignugent";
	int callme = 0;
	strings(strCheese, callme);
	strings(strCheese, callme);
	strings(strCheese, callme);
	strings(strCheese, callme);
	//strings(strCheese, 0);

}

const int MAX = 50;
struct CandyBar
{
	char * brand;
	double weight;
	int cal;
};
////////////////
/* EXERCISE 2 */
/////START//////
void cbfill(CandyBar & cbr, char * brand = "Millennium Munch", double weight = 2.85, int calories = 350);
void cbfill(CandyBar & cbr, char * brand, double weight, int calories)
{
	cbr.cal = calories;
	cbr.brand = brand;
	cbr.weight = weight;
}
void cbshow(const CandyBar & cbr);
void cbshow(const CandyBar & cbr)
{
	cout << "Brand: " << cbr.brand << endl;
	cout << "Weight (Ounces): " << cbr.weight << endl;
	cout << "Calories: " << cbr.cal << endl;
}
void ch8_ex2(void)
{
	CandyBar first = {"MMMMBar", 12.7, 250};
	CandyBar two = {"Snickers", 13.9, 450};
	CandyBar three, four, five;

	cbfill(three, first.brand, first.weight, first.cal);
	cbshow(three);

	cbfill(four, two.brand, two.weight, two.cal);
	cbshow(four);

	cbfill(five);
	cbshow(five);


}
////////////////
/* EXERCISE 2 */
//////END///////

////////////////
/* EXERCISE 3 */
/////START//////
void superSizestr(string & orig);
void superSizestr(string & orig)
{
	for (int x = 0; x < orig.size(); x++)
		orig[x] = toupper(orig[x]);
}

void ch8_ex3(void)
{
	string supersizeMe;

	cout << "Enter a string (q to quit): ";
	while (getline(cin, supersizeMe) && supersizeMe != "q")
	{
		superSizestr(supersizeMe);
		cout << supersizeMe << endl
			 << "Next string (q to quit): ";
	}
}

////////////////
/* EXERCISE 3 */
//////END///////

////////////////
/* EXERCISE 4 */
/////START//////

struct stringy 
{
	char * str;
	int ct;
};

void set(stringy & bootcamp, char * chrp);
void set(stringy & bootcamp, char * chrp)
{
	 
	bootcamp.str = new char[(strlen(chrp) - 1)];
	int x = 0; 
	for (; x < strlen(chrp); x++)
		 bootcamp.str[x] = chrp[x];
	 bootcamp.str[x] = '\0';
	 bootcamp.ct = strlen(chrp);
}

void show(const stringy & butterball, int xxx = 1);
void show(const stringy & butterball, int xxx)
{
	for (int booty = 0; booty < xxx; booty++)
		cout << butterball.str << endl;
}

void show(const char * gutter, int yyy = 1);
void show(const char * gutter, int yyy)
{
	for (int booty = 0; booty < yyy; booty++)
		cout << gutter << endl;
}

void ch8_ex4(void)
{


	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);

	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
}
////////////////
/* EXERCISE 4 */
//////END///////

////////////////
/* EXERCISE 5 */
/////START//////
namespace
{
	const int TELLY = 5;
	int xabby[TELLY] = {1, 70, 12, 52, 500};
	double xaddy[TELLY] = {1.01, 122.02, 923.03, 124.04, 5000.05};
}

template <typename T>
auto max5(T qqq[]) -> T;

template <typename T>
auto max5(T qqq[]) -> T
{
	T theLargeOne = 0;

	for (int x = 0; x < ::TELLY; x++)
	{
		theLargeOne = ((qqq[x] >= theLargeOne) ? qqq[x] : theLargeOne);

		if (x == ::TELLY-1)
			cout << qqq[x];
		else if (x < ::TELLY-1)
		{
			cout << qqq[x] << ", ";
		}
	}
	
	cout << ":  ";	
	return theLargeOne;
}
void ch8_ex5(void)
{
	int ilarge;
	double dlarge;

	ilarge = max5(xabby);
	cout << ilarge << endl; 
	dlarge = max5(xaddy);
	cout << dlarge << endl;
}
////////////////
/* EXERCISE 5 */
//////END///////

////////////////
/* EXERCISE 6 */
/////START//////

template <typename T>
T maxn(T arr[], int n);

template <> char * maxn<char *>(char * arr[], int n);
template <> char * maxn<char *>(char * arr[], int n)
{
	char * sBig = arr[0];

	for (int x = 0; x < n; x++)
		sBig = (strlen(*(arr+x)) >= strlen(sBig)) ? *(arr+x) : sBig;

	return sBig;
}

template <typename T>
T maxn(T * arr, int n)
{
	T theLargeOne = 0;

	for (int x = 0; x < n; x++)
	{
		theLargeOne = ((arr[x] >= theLargeOne) ? arr[x] : theLargeOne);

		if (x == n-1)
			cout << arr[x];
		else if (x < n-1)
		{
			cout << arr[x] << ", ";
		}
	}
	
	cout << ":  ";
	return theLargeOne;

}


void ch8_ex6(void)
{
	char * textoids[TELLY-1] = { "how", "nowethboweth", "brown", "cowfrest" };
	char * sLargerThan = maxn(textoids, 4);
	
	cout << "One string to rule them all: " << maxn(textoids, 4) << endl;
	cout << "One int to find them: ";
	cout << maxn(xabby, TELLY) << endl;
	cout << "One double to bring them all: ";
	cout << maxn(xaddy, TELLY) << endl << "And in the darkness (cast) them";
}

////////////////
/* EXERCISE 6 */
//////END///////

////////////////
/* EXERCISE 7 */
/////START//////
template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

void ch8_ex7(void)
{
	int things[6] = {13, 31, 103, 301, 310, 130};
	double dsum;
	int isum;
	
	debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0},
	};

	double * pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;


	isum = SumArray(things, 6);
	cout << "Listing the sum total of Mr E's things: " << isum << endl;
	dsum = SumArray(pd, 3);
	cout << "Listings the sum total of Mr E's Debts: " << dsum << endl;
	
}

template <typename T>
T SumArray(T arr[], int n)
{
	T sumTotal = 0;

	cout << "template A\n";
	for (int i = 0; i < n; i++)
		sumTotal += arr[i];

	return sumTotal;
}

template <typename T>
T SumArray(T * arr[], int n)
{
	T sumTotal = 0;

	cout << "template B\n";
	for (int i = 0; i < n; i++)
		sumTotal += *(*(arr+i));

	return sumTotal;
}
////////////////
/* EXERCISE 7 */
//////END///////
