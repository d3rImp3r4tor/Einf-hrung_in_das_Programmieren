// Sehschlange_Aufgabe_2.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	//int m;
	//cout << "Anzahl Zeilen eingeben " << endl;
	//cin >> m;
	//int m = 100;
	//int n = 3;
	float A[100][3];
	float B[1][3]; 

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			B[i][j] = 0;
			//cout << B[i][j] << " ";
		}
	}
	
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = 3;
			//cout << A[i][j] << " "; // Kontrollausgabe
		}
		//cout << endl; // Kontrollausgabe
		
	}
	cout << endl;
	
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = A[i][j] +A [i - 1][j - 1];
			//cout << A[i][j] << " "; // Kontrollausgabe
		}
		//cout << endl; // Kontrollausgabe
	}

	// fabs=Absolutbetrag eines Floats
	
	float L=0;
	float W=0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			W = W+(A[i][j]*A[i][j]);
		}
	}L = L + sqrt(W);
	

	//cout << "Die Länge ist ";
	/*for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			B[i][j] = 0;
			cout <<B[i][j] << " ";
		}
	}*/




	float C;
	C = (B[0][0] * B[0][0] + B[0][1] * B[0][1] + B[0][2] * B[0][2]);
	float D;
	D = pow(C, 0.5);

	cout << "Der Betrag der Laenge ist " << D << endl;


	system("Pause");
    return 0;
}

