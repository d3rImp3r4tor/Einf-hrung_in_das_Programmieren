// Aufgabe3_3.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int N, a[10][10];
	bool symmetrisch = true;

	cout << "Bitte Anzahl der Zeilen (<=10) einegeben: ";
	cin >> N;

	if ((N >= 1) && (N <= 10))
	{
		for (int i = 0;i < N;i++)
		{
			for (int j = 0;j < N;j++)
			{
				cout << "a[" << i << "," << j << "] = ";
				cin >> a[i][j];
			}
		}
		cout << endl;

		for (int i = 0; i<N;i++)
		{
			for (int j = 0;j<N;j++)
			{
				cout << a[i][j] << ' ';
			}
			cout << endl;

		}

		for(int i=1;i<N && symmetrisch;i++)
			for (int j = 0; j < i && symmetrisch; j++)
			{
				if (a[i][j] != a[j][i])
					symmetrisch = false;
			}

		if (symmetrisch)
			cout << "Die Matrix symmetrisch";
		else
			cout << "Die Matrix ist nicht symmetrisch";

		cout << endl << endl;


	}
	else
		cout << "Fehler: N nicht in vorgegebenen Schranken!" << endl;

	system("Pause");
    return 0;
}

