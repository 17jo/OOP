#include "Roda.h"

Roda::Roda()
	:Zivotinje()
{
	visina = 1;
	rasponKrila = 1;
	maxZaba = 1;
}

Roda::Roda(int masa, int vis, int rK, int mZ)
	:Zivotinje(masa)
{
	if (vis > 0)
		visina = vis;
	else cout << "Greska " << endl;
	if (rK > 0)
		rasponKrila = rK;
	else cout << "Greska" << endl;
	if (mZ > 0)
		maxZaba = mZ;
	else cout << "Greska" << endl;
}

bool Roda::operator>(Roda& r)
{
	if (this->masa > r.masa)
		return true;
	else if (this->masa < r.masa)
		return false;
	else if (this->maxZaba > r.maxZaba)
		return true;
	else if (this->maxZaba < r.maxZaba)
		return false;
	else if (this->visina > r.visina)
		return true;
	else if (this->visina < r.visina)
		return false;
	else if (this->rasponKrila > r.rasponKrila)
		return true;
	else if (this->rasponKrila < r.rasponKrila)
		return false;

}

bool Roda::operator==(Roda& r)
{
	if (this->masa == r.masa && this->maxZaba == r.maxZaba && this->rasponKrila == r.rasponKrila && this->visina == r.visina)
		return true;
	else return false;

}


ostream& operator<<(ostream& out, Roda& r)
{
	out << r.masa << " " << r.visina << " " << r.rasponKrila << " " << r.maxZaba << endl;
	return out;
}
