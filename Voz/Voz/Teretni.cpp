#include "Teretni.h"

Teretni::Teretni(int masa, int maxKapacitet, int trenutnaPopunjenost)
{
	this->masa = masa;
	this->maxKapacitet = maxKapacitet * 1000;
	this->trenutnaPopunjenost = trenutnaPopunjenost;
}

void Teretni::prikazi(ostream& izlaz)
{
	izlaz << masa << " " << trenutnaPopunjenost << " " << maxKapacitet << endl;
}
