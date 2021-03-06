//Funktionen müssen vor der nutzenden Funktion definiert werden,
// also vor "int main()" und nach "unsing namespace std;"



#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Diese Funktion liefert einen Fließkommawert zurück
// m Masse in kg 
// a Beschleunigung in m/s^2
// Ergebniss in N
float force(float m, float a)
{
	return(m*a);
}

// Diese Funktion macht nur etwas, liefert nichts zurück
// t Erklärungstext, f beliebige Fließkommagröße
// s darzustellende Stellen nach dem Komma

void zeige_ergebnis(string t, float f, int s)
{
	cout << setprecision(s) << fixed << t << f << endl;
	cout << endl;
}


int main()
{
	float masse = 100.0;			// in kg
	float beschleunigung = 9.81;	// in m/s^2
	float kraft;					// in N
	float flaeche = 10.0;			// in mm^2
	float spannung;					// in N/mm^2

	kraft = force(masse, beschleunigung);
	spannung = force(masse, beschleunigung) / flaeche;

	zeige_ergebnis("Die Kraft in N ist ", kraft, 2);
	zeige_ergebnis("Die Spannung in N/mm^2 ist ", spannung, 1);

	cout << endl;

	//system("Pause");
	return 0;
}
