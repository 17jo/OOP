#include "Azdaja.h"



Azdaja::Azdaja(int duzinaG, int duzinaDT)
{
	this->duzinaG = duzinaG;
	this->duzinaDT = duzinaDT;
	this->trbrG = 0;
	this->trbrDT = 0;
	nizG = new Glava * [duzinaG];
	for (int i = 0; i < duzinaG; i++)
		nizG[i] = nullptr;

	nizDT = new DeoTela * [duzinaDT];
	for (int i = 0; i < duzinaDT; i++)
		nizDT[i] = nullptr;
}

Azdaja::~Azdaja()
{
	for (int i = 0; i < duzinaG; i++)
		delete[] nizG[i];	
	delete[] nizG;
	for (int i = 0; i < duzinaDT; i++)
		delete[] nizDT[i];
	delete[] nizDT;
}

void Azdaja::dodajG(Glava& g)
{
	if (trbrG < duzinaG)
		nizG[trbrG++] = &g;
	else cout << "Niz je pun"<<endl;
}

void Azdaja::dodaj(DeoTela& dt)
{
	if (trbrDT < duzinaDT)
		nizDT[trbrDT++] = &dt;
	else cout << "Niz je pun" << endl;
}

void Azdaja::prikazi(ostream& izlaz)
{
	for (int i = 0; i < trbrG; i++)
		nizG[i]->prikaziG(izlaz);
	for (int i = 0; i < trbrDT; i++)
		nizDT[i]->prikaziDT(izlaz);

}