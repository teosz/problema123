#include<iostream>
using namespace std;
class Garantie {
	int nr_luni;  //durata garantie
	char* service; //cine asigura service-ul
public:
	Garantie();
	Garantie(int ,char* );
	Garantie(const Garantie&);
	Garantie& operator=(const Garantie&);
	~Garantie();
	friend ostream& operator<<(ostream&, const Garantie&);
	friend istream& operator>>(istream&, Garantie&);
};
