#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>

void ch4_ex1(void);
void ch4_ex2(void);
void ch4_ex3(void);
void ch4_ex4(void);
void ch4_ex5(void);
void ch4_ex6(void);
void ch4_ex7(void);
void ch4_ex8(void);
void ch4_ex9(void);
void ch4_ex10(void);

int const MAXSIZE = 255;
using namespace std;

struct CandyBar
{
	char brand[MAXSIZE];
	double weight;
	int cal;
};

struct PizzaAnal
{
	char company[MAXSIZE];
	double diameter;
	double weight;
};

int main()
{
	using namespace std;
	int exercise;

	cout << "Por Favor, enter exercise you'd like to test: ";
		
	while (cin >> exercise)
	{
		switch (exercise)
		{
			case 1 : ch4_ex1(); break;
			case 2 : ch4_ex2(); break;
			case 3 : ch4_ex3(); break;
			case 4 : ch4_ex4(); break;
			case 5 : ch4_ex5(); break;
			case 6 : ch4_ex6(); break;
			case 7 : ch4_ex7(); break;
			case 8 : ch4_ex8(); break;
			case 10: ch4_ex10(); break;
			default : cout << "Enter an exercise number to test\n"; break;
		}
		cout << "\nEnter another exercise to test: ";
	}
	return 0;
}

void ch4_ex1(void)
{
	char fname[MAXSIZE];
	char lname[MAXSIZE];
	char grade;
	int age;

	cout << "Please enter your first name: ";
	cin.get();
	cin.getline(fname, MAXSIZE);

	cout << "And now, Please enter your last name: ";
	cin.getline(lname, MAXSIZE);
	
	cout << "What letter grade do you deserve? ";
	cin >> grade;

	cout << "How old are you? ";
	cin >> age;

	cout << "Your name is " << lname << ", " << fname << endl;
	cout << "Current Grade " << (char) ++grade << endl;
	cout << "Age " << age << endl;
}

void ch4_ex2(void)
{
	string name;
	string dessert;

	cout << "Enter your name: ";
	cin.get();
	getline(cin, name);
	cout << "Enter your favorite dessert: ";
	getline(cin,dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
}

void ch4_ex3(void)
{
	char fname[MAXSIZE];
	char lname[MAXSIZE];
	char fullname[MAXSIZE];

	cout << "Enter your first name: ";
	cin.get();
	cin.getline(fname, MAXSIZE);
	cout << "Enter your last name: ";
	cin.getline(lname, MAXSIZE);

	strcpy(fullname, lname);
	strcat(fullname, ", ");
	strcat(fullname, fname);
	
	cout<< "Here's the information in a single string: " << fullname << endl;
}

void ch4_ex4(void)
{
	string fname;
	string lname;
	string fullname;

	cout << "Enter your firstname: ";
	cin.get();
	getline(cin, fname);
	cout << "Enter your lastname: ";
	getline(cin, lname);

	fullname = lname + ", " + fname;

	cout << "Here's the information in a single string: " << fullname << endl;
}

void ch4_ex5(void)
{

	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << snack.brand << " is your snack of choice, weighing in at " << snack.weight << " grams and adding a total of " << snack.cal << " calories to your waistline.  Goodday!\n";
}

void ch4_ex6(void)
{
	CandyBar snack[3] = 
	{ 
		{"Mocha Munch", 2.3, 350},
		{"Snicklers Bar", 2.91, 450},
		{"PaidDay", 2.502, 298}
	};

	for (int x = 0; x < 3; x++)
		cout << snack[x].brand << " is your snack of choice, weighing in at " << snack[x].weight << " grams and adding a total of " << snack[x].cal << " calories to your waistline.  Goodday!\n\n";
}

void ch4_ex7(void)
{
	
}

void ch4_ex8(void)
{
	PizzaAnal *pzA = new PizzaAnal[3];

	cin.get();
	cout << "Enter the first Pizza Co.: ";
	cin.getline(pzA->company, MAXSIZE);
	cout << "Enter Average Diameter of Pizza: ";
	cin >> pzA->diameter;
	cout << "Enter Weight of Average Pizza: ";
	cin >> pzA->weight;

	cout << "Pizza Company: " << (*pzA).company << endl
		 << "Diameter: " << pzA->diameter << endl
		 << "Weight: " << pzA->weight << endl;

	delete [] pzA;
}

void ch4_ex9(void)  //Malfunction pzzzt malfunction
{

	int quantity; 

	cout << "How many candybars would you like to review?! ";
	cin >> quantity;

	CandyBar *snack = new CandyBar[3];
	 
	/*cin.getline(snack->brand, MAXSIZE);
	snack->brand = "Mocha Munch";

	snack[1] = {"Snicklers Bar", 2.91, 450};
	*(snack+2) = {"PaidDay", 2.502, 298};*/

	

	for (int x = 0; x < 3; x++)
		cout << snack[x].brand << " is your snack of choice, weighing in at " << snack[x].weight << " grams and adding a total of " << snack[x].cal << " calories to your waistline.  Goodday!\n\n";

	delete [] snack;
}

void ch4_ex10(void)
{
	int x = 0;
	enum {three = 3};
	array<double, three> race;
	double total = 0.0;

	cin.get();

	while (x < three)
	{
		if ( x == 0 ) cout << "Please enter initial 40 meter dash time: ";
		else cout << "Enter next 40 meter dash time: ";
		cin >> race[x++];
	}
	x = 0;
	while (x < three)
	{
		if ( x == 0 ) cout << "First value was: " << race[x] << endl;
		else cout << "Next Value WUZ: " << race[x] << endl;
		total += race[x++];
	}
		cout << endl;
		cout << "Overall Average: " << total/three << endl;
}