// ue5a3.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

struct point { float x; float y; float z; };
// berechnet den Abstand von P1 zu P2
float Abstand(point p1, point p2)
{
	float dx, dy, dz;
	dx = p1.x - p2.x;
	dy = p1.y - p2.y;
	dz = p1.z - p2.z;
	return(sqrt(dx*dx + dy * dy + dz * dz));
}
// Prüft ob der Punkt tp in der Kugel liegt
bool PunktInKugel(float r, point mp, point tp)
{
	return(Abstand(mp, tp) < r);
}

// Prüft ob der Punkt tp im Würfel liegt
// a ist die Kantenlänge, da der Wurfel um den Ursprung liegt nehmen wir a*0.5
// es wird geprüft ob der Punkt in jeder Richung im Würfel ist
bool PunktInWürfel(float a, point mp, point tp)
{
	float a2 = a * 0.5;
	return((fabs(tp.x - mp.x) < a2) && (fabs(tp.y - mp.y) < a2) && (fabs(tp.z - mp.z) < a2));
}
// Berechnung des Volumens der Kugel mit dem Radius r
float VolumenKugel(float r)
{
	return(4.0 / 3.0*3.1415*r*r*r);
}



int main()
{
	// Teil 1
	point p[100];
	float lim = 5; float lim2 = 2 * lim;
	for (int i = 0; i < 100; i++) {
		p[i].x = rand()*lim2 / RAND_MAX - lim;
		p[i].y = rand()*lim2 / RAND_MAX - lim;
		p[i].z = rand()*lim2 / RAND_MAX - lim;
		cout << p[i].x << ' ' << p[i].y << ' ' << p[i].z << endl;
	} // end for

	cout << endl;

	// Teil 2
	cout << "Teil 2" << endl;
	point mp, tp;
	cout << boolalpha;
	// Mittelpunkt
	mp.x = 1.0;	mp.y = 0.0;	mp.z = 0.0;
	// Testpunkt
	tp.x = 1.5; tp.y = 0.5; tp.z = 0.0;
	cout << PunktInWürfel(2.0, mp, tp) << endl;
	// Ändern der Punkte für den weiteren Verlauf der Aufgabe (Reihe 2)
	mp.z = 1.0;
	cout << PunktInWürfel(2.0, mp, tp) << endl;
	// erneutes ändern (Reihe 3)
	mp.x = -1.0; mp.y = 2.0;
	tp.x = -2.0; tp.y = 3.0; tp.z = 2.0;
	cout << PunktInWürfel(5.0, mp, tp) << endl;
	// Reihe 4
	mp.x = 0.0; mp.y = 0.0; mp.z = 0.0;
	tp.x = 2.0; tp.y = 1.0; tp.z = 0.0;
	cout << PunktInKugel(3.0, mp, tp) << endl;
	// Reihe 5
	mp.x = -2.0; //keine weiteren änderungen
	tp.x = -1.0; tp.y = -1.0; // tp.z beleibt
	cout << PunktInKugel(1.0, mp, tp) << endl;
	// Reihe 6
	mp.y = -2.0; // die anderen Werte bleiben gleich
	tp.x = -3.0; tp.z = -3.0; // tp.y bleibt gleich
	cout << PunktInKugel(4.0, mp, tp) << endl;
	// Reihe 7
	// wie Reihe 6. Hier wird das Kugelvolumen berechnet
	cout << VolumenKugel(3.0) << endl;
	cout << endl;


	// Teil 3
	cout << "Teil 3" << endl;
	float vol = 500.0;
	float a = pow(vol, 1.0 / 3.0);
	float r = pow(vol / 4.0*3.0 / 3.1415, 1.0 / 3.0);
	cout << "vol= " << vol << ' ' << "a= " << a << ' ' << "r= " << r << endl << endl;


	mp.x = 0.0; mp.y = 0.0; mp.z = 0.0;
	cout << "Nummer   x      y     z      Abstand   in Kugel   in Wuerfel" << endl;
	cout << fixed << setprecision(2);
	for (int i = 0; i < 100; i++) {
		cout << setw(5) << i <<
			setw(7) << p[i].x << setw(7) << p[i].y << setw(7) << p[i].z <<
			setw(9) << Abstand(mp, p[i]) <<
			setw(9) << PunktInKugel(r, mp, p[i]) <<
			setw(8) << PunktInWürfel(a, mp, p[i]) <<

			endl;
	}

	cout << endl;
	// Teil 4
	cout << "Teil 4" << endl;

	float max_Abstand = 0.0, akt_Abstand;
	for (int i = 0; i < 100; i++) {
		if ((akt_Abstand = Abstand(mp, p[i])) > max_Abstand)
			max_Abstand = akt_Abstand;
	}

	cout << "Kugelradius= " << max_Abstand
		<< "Kugelvolumen= " << VolumenKugel(max_Abstand) << endl;








	system("Pause");
	return 0;
}

