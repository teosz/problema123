#include<iostream>
#include"Garantie.h"
using namespace std;
class Produs {
	int pret; //ex: 45
	char* marca; 
	Garantie g;
public:
	Produs();
	Produs( int ,char* , Garantie );
	Produs(const Produs&);
	Produs& operator=(const Produs&);
	~Produs();
	friend ostream& operator<<(ostream&, const Produs&);
	friend istream& operator>>(istream&, Produs&);
};

