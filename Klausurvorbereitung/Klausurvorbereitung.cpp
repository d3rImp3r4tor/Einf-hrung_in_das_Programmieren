// Klausurvorbereitung.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	int s=5, j=13, r=10, m, n, o, w, drei=2;
	float d = 2.3, h, lng = 3.1, y, ee, f, g;
	o = r / 4.0;
	y = j / 2;
	w = j % 5;
	ee = r / 2 / 2;
	f = lng * 0.5;
	g = float(r + 1) / 2;
	n = j / 2 / 0.5;
	h = d / drei;
	//cout << setprecision(0) << fixed;
	cout << "O= " << o << endl
		<< "y= " << y << endl
		<< "w= " << w << endl
		<< "ee= " << ee << endl
		<< "f= " << f << endl
		<<"g= " << g << endl
		<< "n= " << n << endl
		<< "h= " << h << endl;

	


	system("Pause");
    return 0;
}

