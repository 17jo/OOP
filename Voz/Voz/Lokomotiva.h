#pragma once
#include <iostream>
using namespace std;
class Lokomotiva
{
private: 
	char tip;
	int maxTezina;

public:
	Lokomotiva(char tip, int maxTezina);
	int vratiTezinu() { return maxTezina; }
	void prikaziL(ostream& izlaz);
};

