#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <string>


void ch8_ex1(void);
void ch8_ex2(void);
void ch8_ex3(void);
void ch8_ex4(void);
void ch8_ex5(void);
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
		/*case '6': ch8_ex6(); break;
		case '7': ch8_ex7(); break;*/
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
template <typename T>
void max5(T qqq[]);

template <typename T>
void max5(T qqq[])
{
	for (int x = 0; x < 5; x++)
		cout << qqq[x] << " ";
	cout << endl;
}
void ch8_ex5(void)
{
	const int TELLY = 5;
	int xabby[TELLY] = {1, 2, 3, 4, 5};
	double xaddy[TELLY] = {1.01, 2.02, 3.03, 4.04, 5.05};

	max5(xabby);
	max5(xaddy);
}
////////////////
/* EXERCISE 5 */
//////END///////

////////////////
/* EXERCISE 6 */
/////START//////

////////////////
/* EXERCISE 6 */
//////END///////