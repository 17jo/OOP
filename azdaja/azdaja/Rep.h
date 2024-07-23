#pragma once
#include "DeoTela.h"
class Rep: DeoTela
{
private: 
	int snagaUdarca;
	int brKrljusti;
	char* nazivViteza;
public:
	Rep(char* boja, int s, int brK, char* naziv);
	~Rep();
	void prikaziDT(ostream& izlaz);
};

