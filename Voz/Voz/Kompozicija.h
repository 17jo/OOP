#pragma once

#include"Lokomotiva.h"
#include"Vagon.h"
#include"Putnicki.h"
#include"Teretni.h"
#include"Cisterna.h"


class Kompozicija
{
	Lokomotiva** nizL;
	Vagon** nizV;
	int maxL;
	int maxV;
	int trbrL;
	int trbrV;

public:
	Kompozicija(int maxL, int maxV);
	float stepenIskoriscenosti();
	int ukupnaTezinaLokomotiva();
	int trenutnaOpterecenost();
	void dodajLokomotivu(Lokomotiva& novaLokomotiva);
	void dodajVagon(Vagon& noviVagon);
	void izbaci();
	void prikaziKompozicijuV(ostream& v);
	void prikaziKompozicijuL(ostream& l);


};

