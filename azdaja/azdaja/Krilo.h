#pragma once
#include "DeoTela.h"
class Krilo :public DeoTela
{
private:
	int duzina;
	int sirina;
	int nosivost;
	int maxFrekvencija;
public:
	Krilo(char* boja, int d, int s, int n, int mf);
	~Krilo();
	void prikaziDT(ostream& izlaz);
};

