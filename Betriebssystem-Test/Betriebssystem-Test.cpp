// Betriebssystem-Test.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{
#if defined(__linux__)
	cout << "Betriebssystem Linux\n\n";
#elif defined(WIN32)
	cout << "Betriebssystem Windows\n\n";
#elif defined(__APPLE__)
	cout << "Betriebssystem Mac OS\n\n";
#else
	cout << "Unbekanntes Betriebssystem\n\n";
#endif
	// Schreiben in Textdatei
	ofstream ofile("ausgabe.txt");
	ofile << "Erste Zeile\n";
	ofile << "Zweite Zeile\n";
	ofile << "Dritte Zeile.";
	ofile.close();
	// Lesen und überprüfen
	string kette = "";
	char x;
	ifstream ifile("ausgabe.txt", std::ios::binary);
	ifile.read(&x, 1);
	while (!ifile.eof())
	{
		kette = kette + x;
		if ((int)x<32)
			cout << '~';
		else
			cout << x;
		ifile.read(&x, 1);
	}
	ifile.close();
	cout << endl << endl;
	cout << kette << endl << endl;
	for (int i = 0; i<kette.length(); i++)
		if ((int)kette[i]<32)
			cout << " #" << (int)kette[i] << ' ';
		else
			cout << kette[i];
	cout << endl;
	
	system("Pause");
	return(0);
}
