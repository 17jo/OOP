#include "Kompozicija.h"


Kompozicija::Kompozicija(int maxL, int maxV)
{
	this->maxL = maxL;
	nizL = new Lokomotiva * [maxL];
	for (int i = 0; i < maxL; i++)
		nizL[i] = nullptr;
	this->maxV = maxV;
	nizV = new Vagon * [maxV];
	for (int i = 0; i < maxV; i++)
		nizV[i] = nullptr;
	trbrL = 0;
	trbrV = 0;
}

float Kompozicija::stepenIskoriscenosti()
{
	return (float)ukupnaTezinaLokomotiva() / trenutnaOpterecenost() * 100;
}

int Kompozicija::ukupnaTezinaLokomotiva()
{
	int tezina = 0;
	for (int i = 0; i < trbrL; i++)
		tezina += nizL[i]->vratiTezinu();
	return tezina;
}

int Kompozicija::trenutnaOpterecenost()
{
	int opterecenost = 0;
	for (int i = 0; i < trbrV; i++)
		opterecenost += nizV[i]->vratiTrenutnuPopunjenost();
	return opterecenost;
}



void Kompozicija::dodajLokomotivu(Lokomotiva& novaLokomotiva)
{
	nizL[trbrL++] = &novaLokomotiva;
}

void Kompozicija::dodajVagon(Vagon& noviVagon)
{
	nizV[trbrV++] = &noviVagon;
}

void Kompozicija::izbaci()
{
	for (int i = 0; i < trbrV; i++)
		if (nizV[i]->vratiMaxKapacitet() == nizV[i]->vratiTrenutnuPopunjenost())
		{
			nizV[i] = nullptr;
			trbrV--;
			for (int brojac = i; brojac < trbrV; brojac++)
				nizV[brojac] = nizV[brojac + 1];
		}
}

void Kompozicija::prikaziKompozicijuV(ostream& v)
{
	for (int i = 0; i < trbrV; i++)
		nizV[i]->prikazi(cout);
}

void Kompozicija::prikaziKompozicijuL(ostream& l)
{
	for (int i = 0; i < trbrL; i++)
		nizL[i]->prikaziL(cout);
}