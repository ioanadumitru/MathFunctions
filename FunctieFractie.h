#pragma once
#include"Fuctie.h"
#include"OperatiiFunctii.h"

class FunctieFractie
{
	FunctiePolinomiala functieNumarator;
	FunctiePolinomiala functieNumitor;
public:
	FunctieFractie(FunctiePolinomiala a, FunctiePolinomiala b);
	FunctieFractie Derivare();
	void Afisare();
};