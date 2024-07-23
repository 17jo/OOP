#include "Glava.h"
#include <iostream>
using namespace std;

int Glava::kod = 0;
Glava::Glava(int brRogova, int brTetovaza)
{
	this->brRogova = brRogova;
	this->brTetovaza = brTetovaza;
	kod++;
	jedinstveniBroj = kod;

}

void Glava::prikaziG(ostream& izlaz)
{
	izlaz << kod << " " << brRogova << " " << brTetovaza << endl;
}
