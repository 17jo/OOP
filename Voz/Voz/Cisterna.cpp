#include "Cisterna.h"

Cisterna::Cisterna(int masa, int maxKapacitet, int trenutnaPopunjenost, int gustina)
	:Vagon(masa, maxKapacitet * 1000 / gustina, trenutnaPopunjenost * 1000 / gustina)
{
	this->gustina = gustina;
}

void Cisterna::prikazi(ostream& izlaz)
{
	izlaz << masa << " " << trenutnaPopunjenost << " " << maxKapacitet << " " << gustina << endl;
}