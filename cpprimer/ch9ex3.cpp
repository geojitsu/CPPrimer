#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	int buffer[45];
	chaff * cArr = new (buffer) chaff[2]; //placement 'new'

	chaff * cArrg = new chaff[2];

	strcpy(cArr[0].dross, "FLEX IT!");
	strcpy(cArr[1].dross, "Flip iT!");

	for (int i = 0; i < 2; i++)
		cout << "String " << i + 1 << " " << cArr[i].dross << endl;

	cin.get();
}