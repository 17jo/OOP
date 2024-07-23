#pragma once

#include <iostream>
using namespace std;
class Glava
{
private:
	static int kod;
	int brRogova;
	int brTetovaza;
	int jedinstveniBroj;
public:
	Glava(int brRogova, int brTetovaza);
	void prikaziG(ostream& izlaz);
};

