#include "Glava.h"
#include "Azdaja.h"
#include "DeoTela.h"
#include "Krilo.h"
#include "Rep.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	Azdaja* a1 = new Azdaja(2, 3);
	Azdaja* a2 = new Azdaja(2, 3);
	Glava* g1 = new Glava(10, 5);
	Glava* g2 = new Glava(10, 5);
	a1->dodajG(*g1);
	a1->dodajG(*g2);
	Glava* g3 = new Glava(10, 3);
	Glava* g4 = new Glava(10, 4);
	a2->dodajG(*g3);
	//Krilo* k1 = new Krilo("plava", 2, 1, 6400, 350);
	//a1->dodaj(*k1);

	//Krilo* k2 = new Krilo("crveno", 3, 1, 6500, 450);
	//a1->dodaj(*k2);
	//Krilo* k3 = new Krilo("zuto", 1, 2, 6600, 550);
	//a1->dodaj(*k3);
	//Krilo* k4 = new Krilo("zeleno", 3, 2, 6700, 650);
	//a2->dodaj(*k4);
	//Rep* r1 = new Rep("ljubicasta", 250, 312, "vitez koja");
	//a1->dodaj(*r1);
	//Rep* r2 = new Rep("crna", 350, 315, "vitez micko");
	//a1->dodaj(*r2);


	ofstream izlaz("izlaz.txt");
	a1->prikazi(cout);
	a2->prikazi(izlaz);
	izlaz.close();
}