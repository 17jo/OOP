#include <iostream>
#include"Vagon.h"
#include"Lokomotiva.h"
#include"Kompozicija.h"

using namespace std;
int main()
{
	Kompozicija* niz = new Kompozicija(5, 10);
	Lokomotiva* l = new Lokomotiva('x', 100);
	niz->dodajLokomotivu(*l);
	Vagon* p = new Putnicki(100, 50, 150);
	niz->dodajVagon(*p);
	Vagon* t = new Teretni(200, 300, 100);
	niz->dodajVagon(*t);
	Vagon* c = new Cisterna(150, 300, 200,3);
	niz->dodajVagon(*c);
	niz->prikaziKompozicijuL(cout);
	niz->prikaziKompozicijuV(cout);
	cout << niz->stepenIskoriscenosti() << endl;
	cout << "Izbacivanje:" << endl;
	niz->izbaci();
	niz->prikaziKompozicijuV(cout);

}