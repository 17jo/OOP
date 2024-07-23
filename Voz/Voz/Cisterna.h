#pragma once

#include"Vagon.h"


class Cisterna : public Vagon
{
	int  gustina;
public:
	Cisterna(int masa, int maxKapacitet, int trenutnaPopunjenost,int gustina);
	int vratiMaxKapacitet() { return maxKapacitet; }
	void prikazi(ostream& izlaz);
};

