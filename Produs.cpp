#include"Produs.h"
Produs::Produs()
{
	pret = 0;
	marca = NULL;

}
Produs::Produs(int pret_nou,char* marca_noua, Garantie garantie_nou)
{
	pret = pret_nou;
	if (marca_noua == NULL)
	{
		marca = marca_noua;
	}
	else
	{
		marca = new char[strlen(marca_noua) + 1];
		strcpy_s(marca, sizeof(marca), marca_noua);
	}
}
Produs& Produs:: operator=(const Produs& produs_nou)
{
	this->pret = produs_nou.pret;
	this->marca = produs_nou.marca;
	return *this;
}
Produs::~Produs()
{
	if (marca != NULL)
	{
		delete[]marca;
	}
}
ostream& operator<<(ostream& dev , const Produs& produs)
{
	dev << produs.pret << endl << produs.marca << endl;
	return dev;
}
istream& operator>>(istream& dev , Produs& produs)
{
	dev >> produs.pret;
	dev >> produs.marca;
	return dev;
}
