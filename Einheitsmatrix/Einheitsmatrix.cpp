// Klausurvorbereitung.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	int n;
	cout << "Geben die Anzahl der Zeilen ein ";
	cin >> n;
	//int m = 4;//Anzahl der Zeilen
	//int n = 4;//Anzahl der Spalten
	float A[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				A[i][j] = 1;
			else
				A[i][j] = 0;
		}

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}





	system("Pause");
	return 0;
}

