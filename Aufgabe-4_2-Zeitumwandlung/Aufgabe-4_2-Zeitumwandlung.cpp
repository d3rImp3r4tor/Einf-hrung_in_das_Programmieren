// Aufgabe-4_2-Zeitumwandlung.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

float minuten(int s)
{
	return(s/60.0);
}

float stunden(int s)
{
	return(s / 3600.0);
}

float tage(int s)
{
	return(s / (3600.0*24.0));
}

int main()
{
	int sek;
	char einheit;

	while (true) 
	{
		cout << "Anzahl Sekunden eingeben: ";
		cin >> sek;

		if (sek <= 0)
			break;

		cout << "Ausgabeeinheit? (m,h,d)";
		cin >> einheit;

		cout << fixed << setprecision(1);
		switch (einheit)
		{
		case 'm':cout << minuten(sek) << " Minuten\n\n"; break;
		case 'h':cout << stunden(sek) << " Stunden\n\n"; break;
		case 'd':cout << tage(sek) << " Tage\n\n"; break;
		default: cout << "Zeichen nicht vorgesehen\n\n";
		}
	}




	system("Pasue");
    return 0;
}

