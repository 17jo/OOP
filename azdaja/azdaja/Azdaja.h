#pragma once
#include "Glava.h"
#include "DeoTela.h"
#include <iostream>
using namespace std;

class Azdaja
{	
private:
	Glava** nizG;
	DeoTela** nizDT;
	int trbrG; //trenutni broj rogova
	int trbrDT;
	int duzinaG;
	int duzinaDT; 
public:
	Azdaja(int duzinaG, int duzinaDT);
	~Azdaja();
	void dodajG(Glava& g);
	void dodaj(DeoTela& dt);
	void prikazi(ostream& izlaz);
};

