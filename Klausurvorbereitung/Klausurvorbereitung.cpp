// Klausurvorbereitung.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	int j = 11;
	float x;
	x = j / 2;
	
	cout << fixed << setprecision(1);
	cout <<  x << endl;

	unsigned char c1 = 122, e1; e1 = c1 + 6;
	signed char c2 = 122, e2; e2 = c2 + 6;

	cout << (int)e1 << ' ' << int(e2) << endl;

	int i1 = 4294967295;
	unsigned int f1; f1 = i1 + 10000;
	int i2; i2 = i1 + 5;
	signed int i3; i3= 4294967295;
	signed int i4; i4 = i3 + 45;

	cout << "unsigned "<< f1 << endl
		<< "int " << i2 << endl 
		<< " signed int " << i3<< endl;



	system("Pause");
    return 0;
}

