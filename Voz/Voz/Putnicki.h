#pragma once
#include"Vagon.h"

class Putnicki : public Vagon
{
	int maxLjudi;

public:
	Putnicki(int masa, int trenutnaPopunjenost, int maxLjudi);
	int vratiMaxKapacitet() { return maxKapacitet; }
	void prikazi(ostream& izlaz);

};

