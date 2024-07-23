#include "Vagon.h"


Vagon::Vagon()
{
	masa = 0;
	maxKapacitet = 0;
	trenutnaPopunjenost = 0;
}

Vagon::Vagon(int masa, int maxKapacitet, int trenutnaPopunjenost)
{

	this->masa = masa;
	this->maxKapacitet = maxKapacitet;
	if (trenutnaPopunjenost < maxKapacitet)
		this->trenutnaPopunjenost = trenutnaPopunjenost;
	else this->trenutnaPopunjenost = maxKapacitet;
}