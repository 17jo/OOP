#pragma once
#include <iostream>
using namespace std;

template <class T>
class Niz
{
private:
	T* niz;
	int duzina;
	int trbr;
public:
	Niz(int duzina);
	~Niz();
	
	bool proveriDuplikate(T& novi);
	void dodaj(T& novi);
	void izbaci(int index);
	friend ostream& operator<< <>(ostream& out, Niz<T> n);

};

template <class T>
Niz<T>::Niz(int duzina)
{
	this->duzina = duzina;
	trbr = 0;
	niz = new T[duzina];
}

template <class T>
Niz<T>::~Niz()
{
	delete[] niz;
}

template <class T>
bool Niz<T>::proveriDuplikate(T& novi)
{
	bool nadjen = false;
	for (int i = 0; i < trbr; i++)
		if (niz[i] == novi)
			nadjen = true;
	return nadjen;
}


template <class T>
void Niz<T>::dodaj(T& novi)
{
	if (trbr > duzina)
		throw "Niz je pun!";
	else
		if (!(novi < niz[trbr - 1]))
			throw "Nije sortiran!";
		else if (proveriDuplikate(novi))
			throw "Imamo duplikat!";
		else niz[trbr++] = novi;
}


template <class T>
void Niz<T>::izbaci(int index)
{
	if (trbr == 0)
		throw "Niz je prazan";
	else if (index<0 || index>trbr)
		throw "Nepostojeci index";
	else {
		for (int i = index; i < trbr - 1; i++)
			niz[i] = niz[i + 1];    // ne treba da predefinisem operator dodele jer ni u rodi ni u zabi nemamo ni jedan atribut koji je dinamicki
			trbr--;
	}
}



template <class T>
ostream& operator<< <>(ostream& out, Niz<T> n)
{
	for (int i = 0; i < n.trbr; i++)
		out << n.niz[i];     // u Zabi i Rodi treba predefinisati out
	return out; 
}