#pragma once
#pragma once
#include<iostream>

using namespace std;

class Vagon
{
protected:
	int masa;
	int maxKapacitet;
	int trenutnaPopunjenost;

public:
	Vagon();
	Vagon(int masa, int maxKapacitet, int trenutnaPopunjenost);
	virtual int vratiMaxKapacitet() { return maxKapacitet; }
	int vratiTrenutnuPopunjenost() { return trenutnaPopunjenost; }
	virtual void prikazi(ostream& izlaz) = 0;

};

