#pragma once
#include <iostream>
using namespace std;
class DeoTela
{
protected:
	char* boja;
public:
	DeoTela(char *boja);
	virtual ~DeoTela();
	virtual void prikaziDT(ostream& izlaz);
};

