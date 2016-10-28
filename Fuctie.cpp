#include "Fuctie.h"
#include<iostream>
using namespace std;

FunctiePolinomiala FunctiePolinomiala::Derivare()
{
	multimap<int, int> functieDerivata;
	multimap<int, int>::iterator it;
	
	for (it = functie.begin(); it != functie.end(); it++)
	{
		if((*it).first == 0)
			functieDerivata.insert(make_pair(0, 0));
		if((*it).first == 0 && (*it).second != 0)
			functieDerivata.insert(make_pair(0, 0));
		else
			functieDerivata.insert(make_pair((*it).first - 1, (*it).first * (*it).second));
	}

	return FunctiePolinomiala(functieDerivata);
}


FunctiePolinomiala::FunctiePolinomiala()
{
	
}

FunctiePolinomiala::FunctiePolinomiala(multimap<int, int> f)
{
	functie = f;
}

void FunctiePolinomiala::AddMembru(int putere, int coeficient)
{
	functie.insert(make_pair(putere, coeficient));
}

void FunctiePolinomiala::AfisareFunctie()
{
	
	multimap<int, int>::iterator it = functie.begin();
	int i = 0;
	for (; it != functie.end(); it++)
	{
		if ((*it).second == 0 && (*it).first == 0)
			cout << "0";
		if ((*it).second > 0)
				cout << "+" << (*it).second << "*x^" << (*it).first;
		else if((*it).second != 0)
			cout << (*it).second << "*x^" << (*it).first;
		i++;
	}

	cout << endl;	
}

void FunctiePolinomiala::SetX(float x)
{
	this->x = x;
}
