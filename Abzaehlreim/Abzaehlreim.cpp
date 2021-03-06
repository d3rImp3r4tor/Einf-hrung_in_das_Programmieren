// Abzählreim
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() // Auf- und Abbau einer geschlossenen Zeigerkette (Abzählreim)
{
	const int anzahl_silben = 11;

	struct t_kind {
		string name;
		t_kind* next;
	};
	t_kind* neues_kind; neues_kind = NULL;
	t_kind* aktuelles_kind; aktuelles_kind = NULL;
	t_kind* raus_kind; raus_kind = NULL;
	ifstream f("kinder.txt");
	ofstream o("ergebnis.txt");
	while (!f.eof()) {
		neues_kind = new t_kind;
		f >> neues_kind->name; // Inhalt belegen
		neues_kind->next = aktuelles_kind; // next-Adresse belegen
		aktuelles_kind = neues_kind; // aktuelles_kind aktualisieren
	}
		f.close(); // Datei wieder schließen
	while (aktuelles_kind->next != NULL) {
		o << aktuelles_kind->name << " "; // zur Kontrolle ausgeben ...
		aktuelles_kind = aktuelles_kind->next; // ... und aktuelles_kind-Zeiger weitersetzen
	}
	aktuelles_kind->next = neues_kind; // bei der Gelegenheit Ring schließen
	neues_kind = NULL; // unnötig, aber zur Sicherheit
	o << "\nAktuelles Kind: " << aktuelles_kind->name << "\n\n";
	// jetzt kommt der Abzählreim
	// der Zeiger "aktuelles_kind" läuft für jede Silbe um ein Kind weiter
	o << "Ein Abzaehlreim pro Zeile:\n";
	while (aktuelles_kind != aktuelles_kind->next) { // solange noch mindestens ein anderes Kind da
		for (int i = 1; i <= anzahl_silben - 1; i++) { // eine Silbe weniger, damit Vorgänger noch bekannt
			aktuelles_kind = aktuelles_kind->next;
			o << aktuelles_kind->name + " ";
		}
		o << aktuelles_kind->next->name << " fliegt raus\n"; // letzte Silbe
		raus_kind = aktuelles_kind->next;
		aktuelles_kind->next = raus_kind->next; // Ring neu schließen
		delete raus_kind; // Speicherzellen für dieses Kind wieder freigeben
		raus_kind = NULL;
	}
	o << aktuelles_kind->name << " bleibt zum Schluss uebrig.\n\n";
		delete aktuelles_kind; // Nun ist auch dieser Speicher wieder freigegeben
		aktuelles_kind = NULL;
	
	
	
	
	
	
	
	
	
	
		system("Pasue");
	return 0;
}