#pragma once
#include <iostream>
using namespace std;
#include "Zivotinje.h"
class Roda:public Zivotinje
{
private:
	int visina;
	int rasponKrila;
	int maxZaba;
public:
	Roda();
	Roda(int masa, int vis, int rK, int mZ);
	bool operator>(Roda& r);
	bool operator==(Roda& r);
	friend ostream& operator<<(ostream& out, Roda& r);
};

