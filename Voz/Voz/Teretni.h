#pragma once

#include"Vagon.h"

class Teretni : public Vagon
{

public:
	Teretni(int masa, int maxKapacitet, int trenutnaPopunjenost);
	int vratiMaxKapacitet() { return maxKapacitet; }
	void prikazi(ostream& izlaz);


};

