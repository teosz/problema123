#include"Garantie.h"
Garantie::Garantie()
{
	nr_luni = 0;
	service = NULL;
}
Garantie::Garantie(int nr_luni_nou,char* service_nou)
{
	nr_luni = nr_luni_nou;
	if (service_nou == NULL)
	{
		service = NULL;
	}
	else
	{
		service = new char[strlen(service_nou) + 1];
		strcpy_s(service, sizeof(service), service_nou);
	}

}
Garantie::Garantie(const Garantie& garantie_noua)
{
	nr_luni = garantie_noua.nr_luni;
	if (garantie_noua.service == NULL)
	{
		service = NULL;
	}
	else
	{
		service = new char[sizeof(garantie_noua.service) + 1];
		strcpy_s(service, sizeof(service), garantie_noua.service);
	}

}
Garantie& Garantie::operator=(const Garantie& garantie)
{
	this->nr_luni = garantie.nr_luni;
	this->service = garantie.service;
	return *this;
}
Garantie::~Garantie()
{
	if (service != NULL)
	{
		delete[]service;
	}
}
ostream& operator<<(ostream& dev , const Garantie& garantie)
{
	dev << garantie.nr_luni << endl << garantie.service << endl;
	return dev;

}
istream& operator>>(istream& dev , Garantie& garantie)
{
	dev >> garantie.nr_luni;
	dev >> garantie.service;
	return dev;
}