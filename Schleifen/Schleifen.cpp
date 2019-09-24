// Schleifen-Programmierung 
// Das ist ein GitHub-Test

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Ausgabe der Groß-/Kleinbuchstaben
	for (int i = 65 ; i <= 90 ; i = i + 1)
		cout << char(i); // für kleinbuchstaben i+32
	cout << endl << endl;

	float einmat[3][3]; // Matrix deklarieren...
	for (int i = 0 ; i<3 ; i++)
		for (int j = 0 ; j<3 ; j++)
			// ... und als Einheitsmatrix initialisieren
			if (i == j)
				einmat[i][j] = 1.0;
			else
				einmat[i][j] = 0.0;
	cout << "Kontrolle der Diagonalelemente: "
		<< setprecision(1) << fixed;

	for (int i = 0 ; i<3 ; i++)
		cout << einmat[i][i] << ' ';

	cout << endl << endl;

	int n = 1, s;
	// Ausdrucken aller direkt aufeinander folgender Tripel von
	// natürlichen Zahlen, deren Summer kleiner aks 100 ist

	// bitte genau studieren!!!!
	// V---- gleichzeitige berechnung und auswertung
	while ((s = 3 * (n + 1))<100)
	{
		cout << n << ' ' << n + 1 << ' ' << n + 2
			<< " Summe = " << s << endl;
		n++;
	}



	system("Pause");
	return(0);
}
