#include "stdafx.h"
#include <iostream>
#include <array>

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
	

double harmony(double x, double y)
{
	return 2.0*x*y/(x+y);
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

int * golfread(const int arraysize)
{
	int * scores = new int[arraysize];
	
	cout << "Enter golf scores to be crunched\n#1: ";

	for (int loop = 0; loop < arraysize && cin >> scores[loop]; ++loop)
		cout << "#" << loop+1 << ": ";

	return scores;
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

int fill_array(double * input, int size)
{
	int loop = 0;
	cout << "Enter a bunch of double values, ya fairy\n";
			
	for (; loop < size && cout << "#" << loop+1 << ": " && cin >> input[loop]; loop++)
		;
	cout << endl;
	return loop;
}

int show_array(const double * input, int size)
{
	int loop = 0;

	while (loop < size)
	{
		cout << "Array Element #" << loop+1 << ": " << input[loop] << endl;
		loop++;
	}
	
	return 0;
}

void Reverse_array(double da[], int asize);
void Reverse_array(double da[], int asize)
{
	double tempo;
	int countr = 0;
	int newsize = asize;

	asize--;

	while(countr < asize)
	{
		tempo = da[countr];
		da[countr++] = da[asize];
		da[asize--] = tempo;
	}

	//show_array(da, newsize);
}

void ch7_ex6(void)
{
	const int arraysize = 5;
	int numberEntered, numsReturned;
	numberEntered = numsReturned = 0;
	double theArray[arraysize];

	numberEntered = fill_array(theArray, arraysize);
	numsReturned = show_array(theArray, numberEntered);
	cout << "Reverse array...HOOO-OOOH\n\n";
	Reverse_array(theArray, numberEntered);
	show_array(theArray, numberEntered);
	cout << "Double Reverse ... Yooo-oooh!\n\n";
	Reverse_array(theArray, numberEntered);
	show_array(theArray, numberEntered);
	cout << "Double Reverse ... Yooo-oooh!\n\n";
	Reverse_array(theArray+1, numberEntered-2);
	show_array(theArray, numberEntered);
}

double * fill_array(double * arStart, double * arEnd);
double * fill_array(double * arStart, double * arEnd)
{
	using namespace std;
	double temp;
	int i = 0;

	while ( arStart != arEnd )
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(arStart++) = temp;
		i++;
	}
	return arStart;
}

void show_array(const double * aStart, const double * aEnd);
void show_array(const double * aStart, const double * aEnd)
{
	
	for (int i = 0; aStart < aEnd; i++)
	{
		cout << "Property #" << (i + 1) << ": ";
		cout << *(aStart++) << endl;
	}
}

void revalue(double r, double * aStart, double * aEnd);
void revalue(double r, double * aStart, double * aEnd)
{
	for (int i = 0; aStart < aEnd; i++)
		*(aStart++) *= r;
}

void ch7_ex7(void)
{
	const int Max = 5;
	double properties[Max];

	double * size = fill_array(properties, properties+Max);
	show_array(properties, size);

	if (size)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
}

const int Seasons = 4;
//const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
const char Seazon[Seasons][8] = 
{
	"Spring",
	"Summer",
	"Fall",
	"Winter"
};

struct expenses
{ 
	double expens[Seasons]; 
};

void fill(expenses * expend);
void show(expenses * expend);

void fill(expenses * expend)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter ";

		for (int x = 0; Seazon[i][x] != '\0'; x++)
			cout << Seazon[i][x];
		
		cout << " expenses: ";
		cin >> expend->expens[i];
	}
}

void show(expenses * expend)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << ": $" << expend->expens[i] << endl;
		total += expend->expens[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
void ch7_ex8(void)
{
	expenses expendables;
	fill(&expendables);
	show(&expendables);
}

//Exercise: Student class array of structs

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int getinfo(student pa[], int n)
{
	int x = 0;
	while (x < n)
	{
		cout << "Student #" << x << endl
			 << "Name:\t";
		cin.getline(pa[x].fullname, SLEN);
		if (pa[x].fullname == " ")
			return x;
		cout << "Hobby:\t";
		cin.getline(pa[x].hobby, SLEN);
		cout << "Skill:\t";
		cin >> pa[x].ooplevel;
		cin.get();
		x++;

	}
	return x;
	
}

void display1(student st) 
{
	cout << "Name:\t" << st.fullname << endl;
	cout << "Hobby:\t" << st.hobby << endl;
	cout << "Skillz:\t" << st.ooplevel << "\n\n";
}
void display2(const student * ps)
{
	cout << "Name:\t" << ps->fullname << endl;
	cout << "Hobby:\t" << ps->hobby << endl;
	cout << "Skillz:\t" << ps->ooplevel << "\n\n";
}
void display3(const student pa[], int n)
{
	for (int x = 0; x < n; x++)
	{
		cout << "Name:\t" << pa[x].fullname << endl;
		cout << "Hobby:\t" << pa[x].hobby << endl;
		cout << "Skillz:\t" << pa[x].ooplevel << "\n\n";
	}
}
void ch7_ex9(void)
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	//return 0;
}

double calculate(double x, double y, double (*pf)(double r, double s));
double calculate(double x, double y, double (*pf)(double r, double s))
{
	return pf(x, y);
}
double add(double p, double q);
double add(double p, double q)
{
	return p + q;
}
double subtract(double p, double q);
double subtract(double p, double q)
{
	return p - q;
}
void ch7_ex10(void)
{
	double n, o;
	n = o = 0.0;
	cout << "Enter two double values to be transmuted <q to quit>: ";
	while (cin >> n >> o)
	{
		cout << "Value 1: " << calculate(n, o, add) << endl;
		cout << "Value 2: " << calculate(n, o, subtract) << endl;
		cout << "Another\n";
	}
}