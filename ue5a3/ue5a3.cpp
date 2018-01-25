// ue5a3.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

struct point { float x; float y; float z; };

float Abstand(point p1, point p2)
{
	float dx, dy, dz;
	dx = p1.x - p2.x;
	dy = p1.y - p2.y;
	dz = p1.z - p2.z;
	return(sqrt(dx*dx + dy*dy + dz*dz));
}

bool PunktInKugel(float r, point mp, point tp)
{
	return(Abstand(mp, tp) < r);
}


bool PunktImWürfel(float a, pont mp, point tp)
{

}



int main()
{
	// Teil 1
	point p[100];
	float lim = 5; float lim2 = 2 * lim;
	for (int i = 0; i < 100;i++) {
		p[i].x = rand()*lim2 / RAND_MAX - lim;
		p[i].y = rand()*lim2 / RAND_MAX - lim;
		p[i].z = rand()*lim2 / RAND_MAX - lim;
		cout << p[i].x << ' ' << p[i].y << ' ' << p[i].z;
	} // end for
	
	
	system("Pause");
	return 0;
}

