#include "Putnicki.h"


Putnicki::Putnicki(int masa, int trenutnaPopunjenost, int maxLjudi)
	:Vagon(masa,maxLjudi*0.08,trenutnaPopunjenost)
{
	
	this->maxLjudi = maxLjudi;
}

void Putnicki::prikazi(ostream& izlaz)
{
	izlaz << masa << " " << trenutnaPopunjenost << " " << maxKapacitet << " " << maxLjudi << endl;
}
