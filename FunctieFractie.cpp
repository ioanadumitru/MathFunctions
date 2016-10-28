#include "FunctieFractie.h"
#include<iostream>
using namespace std;

FunctieFractie::FunctieFractie(FunctiePolinomiala a, FunctiePolinomiala b)
{
	functieNumarator = a;
	functieNumitor = b;
}

FunctieFractie FunctieFractie::Derivare()
{
	FunctiePolinomiala numaratorDerivat = functieNumarator.Derivare();
	FunctiePolinomiala numitorDerivat = functieNumitor.Derivare();
	
	FunctiePolinomiala inmultireA = OperatiiFunctii::InmultireFunctii(numaratorDerivat, functieNumitor);
	FunctiePolinomiala inmultireB = OperatiiFunctii::InmultireFunctii(functieNumarator, numitorDerivat);
	FunctiePolinomiala schimbareSemnB = OperatiiFunctii::SchimbareSemn(inmultireB);
	FunctiePolinomiala ab = OperatiiFunctii::AdunareFunctii(inmultireA, schimbareSemnB);
	FunctiePolinomiala numitorRezultat = OperatiiFunctii::InmultireFunctii(functieNumitor, functieNumitor);

	return FunctieFractie(ab, numitorRezultat);
}


void FunctieFractie::Afisare()
{
	functieNumarator.AfisareFunctie(); cout << "/";
	functieNumitor.AfisareFunctie();
}
