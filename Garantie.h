#include<iostream>
#include<cstring>
using namespace std;
class Garantie {
	int nr_luni;  //durata garantie
	char* service; //cine asigura service-ul
public:
	Garantie();
	Garantie(int , const char*);
	Garantie(const Garantie&);
	Garantie& operator=(const Garantie&);
	~Garantie();
	friend ostream& operator<<(ostream&, const Garantie&);
	friend istream& operator>>(istream&, Garantie&);
};
