#include "Krilo.h"
#include <iostream>
using namespace std;
Krilo::Krilo(char* boja, int d, int s, int n, int mf)
	:DeoTela(boja)
{
	duzina = d;
	sirina = s;
	nosivost = n;
	maxFrekvencija = mf;
}

void Krilo::prikaziDT(ostream& izlaz)
{
	DeoTela::prikaziDT(izlaz);

	izlaz << duzina << " " << sirina << " " << nosivost << " " << maxFrekvencija << endl;
}
