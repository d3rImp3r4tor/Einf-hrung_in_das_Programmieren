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
	float B; B = 0.0;
	
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = 3;
			//cout << A[i][j] << " ";
		}
		//cout << endl;
		
	}
	cout << endl;
	
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = A[i][j] +A [i - 1][j - 1];
			//cout << A[i][j] << " ";
		}
		//cout << endl;
	}
	

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			B=A[i][j]
		}
	}


	

	cout << "Die Länge ist " <<B << endl;


	system("Pause");
    return 0;
}

