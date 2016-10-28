#pragma once
#include"Afunction.h"
#include<vector>
#include<map>
using namespace std;

class FunctiePolinomiala
{
public:
	float x;
	multimap<int, int> functie; //power, coeficient
	FunctiePolinomiala();
	FunctiePolinomiala(multimap<int, int> f);
	void AddMembru(int coeficient, int putere);
	FunctiePolinomiala Derivare();
	void AfisareFunctie();
	void SetX(float x);
};