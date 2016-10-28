#include"Fuctie.h"
#include"OperatiiFunctii.h"
#include"FunctieFractie.h"
#include<iostream>
using namespace std;

int main()
{

	FunctiePolinomiala functie;
	functie.AddMembru(2, 2);
	functie.AddMembru(4, 4);
	functie.AddMembru(3, 5);
	functie.AfisareFunctie();

	FunctiePolinomiala f;
	f.AddMembru(2, 3);
	f.AddMembru(4, 5);
	f.AfisareFunctie();

	FunctiePolinomiala inmultire = OperatiiFunctii::InmultireFunctii(functie, f);
	inmultire.AfisareFunctie();

	FunctiePolinomiala adunare = OperatiiFunctii::AdunareFunctii(functie, inmultire);
	adunare.AfisareFunctie();

	FunctiePolinomiala derivatF = functie.Derivare();
	derivatF.AfisareFunctie();
	FunctiePolinomiala k = derivatF.Derivare();
	k.AfisareFunctie();

	cout << "FRactii compuse:" << endl;
	FunctiePolinomiala shub;
	shub.AddMembru(0, 1);
	FunctiePolinomiala s;
	s.AddMembru(2, 1);
	FunctieFractie ss(shub, s);
	FunctieFractie ssd = ss.Derivare();
	ssd.Afisare();



	system("pause");
	return 0;
}

