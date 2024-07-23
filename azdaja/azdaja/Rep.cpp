#include "Rep.h"
#include "string.h"
#include <iostream>
using namespace std;
Rep::Rep(char* boja, int s, int brK, char* naziv)
	:DeoTela(boja)
{
	snagaUdarca = s;
	brKrljusti = brK;
	nazivViteza = new char[strlen(naziv) + 1];
	std::strcpy(nazivViteza, naziv);
}

Rep::~Rep()
{
	delete[] nazivViteza; 
}

void Rep::prikaziDT(ostream& izlaz)
{
	DeoTela::prikaziDT(izlaz);
	izlaz << snagaUdarca << " " << brKrljusti << " " << nazivViteza << endl;
}