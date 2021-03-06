// Matrix Transponieren.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//m x n Matrix
	// Anzahl Zeilen
	int m ; 
	cout << "Anzahl Zeilen ";
	cin >> m;
	// Anzahl Spalten
	int n; 
	cout << "Anzahl Spalten ";
	cin >> n;

	// Matrix initialisieren
	float A[10][10]; //= { { 1,3,5,7 },{ 2,4,6,8 },{ 3,5,7,9 },{ 4,6,8,10 } };

	// Matrix A auf einfache Weise 

	// Matrix A Werte zuweisen
	for (int i = 0; i < m && i<10; i++) {
		for (int j = 0; j < n && j<10; j++)
			cout << A[i][j] << " ";
	// dieses cout bewirkt das ich nach jeder i-Zeile der Matrix eine neune Zeile in der Ausgabe bekomme
		cout << endl;
	}
	// dieses cout sorgt nur für einen Abstand zu dem nächsten Block
	cout << endl;
	
	
	// transponierte Matrix B initiieren
	float B[4][4];
	// ablauf der Invertierung
	for (int i = 0; i < m && i<10; i++) {
		for (int j = 0; j < n && j<10; j++)
			B[j][i] = A[i][j];
	}
	// Ausgabe der MAtrix B
	for (int j = 0; j < m && j<10; j++) {
		for (int i = 0; i < n && i<10; i++)
			cout << B[j][i] << " ";
		// dieses cout bewirkt das ich nach jeder i-Zeile der Matrix eine neune Zeile in der Ausgabe bekomme
		cout << endl;
	}
	// dieses cout sorgt nur für einen Abstand zu dem nächsten Block
	cout << endl;
	


	// Ausgabe
	cout << "Anzahl Zeilen " << m << endl
		<< "Anzahl Spalten " << n << endl;
		/*<< "original Matrix " << A << endl*/
		/*<< "transponierete Matrix " << B << endl;*/







	system("Pause");
    return 0;
}

 