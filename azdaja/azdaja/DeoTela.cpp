#include "DeoTela.h"
#include <string.h>
DeoTela::DeoTela(char* boja)
{
	this->boja = new char[strlen(boja) + 1];
	strcpy(this->boja, boja);
}

DeoTela::~DeoTela()
{
	delete[] boja;
}

void DeoTela::prikaziDT(ostream& izlaz)
{
	izlaz << boja << " ";
}