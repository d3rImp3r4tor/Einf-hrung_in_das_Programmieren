// uebx.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
// Dieses Programm soll herausfinden auf welchem Betriebssystem es läuft
// Diese Zeile ist jetzt nur ein Test um fest zu stellen warum ich meine Datein in GitHub pushen kann

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	// Versuch, das eigene Betriebssystem zu erkennen
#if defined(__linux__)
	cout << "Betriebssystem Linux\n\n";

#elif defined(WIN32)
	cout << "Betriebssystem Windows\n\n";

#elif defined(__APPLE__)
	cout << "Betriebssystem macOS\n\n";

#else
	cout << "Unbekanntes Betriebssystem\n\n";
#endif // defined
	
	// Erzeugen/Überschreiben einer Datei
	ofstream outfile("Mix.dat");
	//Schreiben von textzeilen (wie mit cout)
	outfile << "Erste Zeile, \n";
	outfile << "Zweite Zeile, \n";
	outfile << "Dritte Zeile, \n";

	outfile.close();

	// neues Öffnen der gerade geschriebenen Dateim lesen und analysieren
	string kette = "";
	char x;
	ifstream infile("Mix.dat", ios::binary); // gewollt binär einlesen
	infile.read(&x, 1);
	while (!infile.eof())
	{
		kette = kette + x;
		if ((int)(uint8_t)x < 32)
			cout << '#' << (int)(uint8_t)x;
		else
			cout << x;
		infile.read(&x, 1);
	}
	infile.close();
	
	
	system("Pause");
    return (0);
}

