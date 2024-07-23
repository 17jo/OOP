#include "Lokomotiva.h"

Lokomotiva::Lokomotiva(char tip, int maxTezina)
{
	this->tip = tip;
	this->maxTezina = maxTezina;
}

void Lokomotiva::prikaziL(ostream& izlaz)
{
	izlaz << tip << " " << maxTezina << " " << endl;
}
