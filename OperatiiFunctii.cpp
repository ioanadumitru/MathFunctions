#include "OperatiiFunctii.h"

FunctiePolinomiala OperatiiFunctii::InmultireFunctii(FunctiePolinomiala f1, FunctiePolinomiala f2)
{
	multimap<int, int> inmultire;

	multimap<int, int>::iterator it;
	multimap<int, int>::iterator i;

	for (it = f1.functie.begin(); it != f1.functie.end(); it++)
	{
		for (i = f2.functie.begin(); i != f2.functie.end(); i++)
		{
			inmultire.insert(make_pair((*it).first + (*i).first, (*it).second * (*i).second));
		}
	}
	return FunctiePolinomiala(inmultire);
}


FunctiePolinomiala OperatiiFunctii::AdunareFunctii(FunctiePolinomiala f1, FunctiePolinomiala f2)
{
	multimap<int, int> add = f1.functie;

	multimap<int, int>::iterator i = f2.functie.begin();

	for (; i != f2.functie.end(); i++)
	{
		int x = add.count((*i).first);
		if (x != 0)
		{
			while (x)
			{
				multimap<int, int>::iterator j = add.find((*i).first);
				add.insert(make_pair((*i).first, (*j).second + (*i).second));
				add.erase(j);
				x--;
			}
		}
		else
			add.insert(make_pair((*i).first, (*i).second));
	}
	return FunctiePolinomiala(add);
}

FunctiePolinomiala OperatiiFunctii::ScadereFunctii(FunctiePolinomiala f1, FunctiePolinomiala f2)
{
	multimap<int, int> add = f1.functie;

	multimap<int, int>::iterator i = f2.functie.begin();

	for (; i != f2.functie.end(); i++)
	{
		int x = add.count((*i).first);
		if (x != 0)
		{
			while (x)
			{
				multimap<int, int>::iterator j = add.find((*i).first);
				add.insert(make_pair((*i).first, (*j).second - (*i).second));
				add.erase(j);
				x--;
			}
		}
		else
			add.insert(make_pair((*i).first, (*i).second));
	}
	return FunctiePolinomiala();
}

FunctiePolinomiala OperatiiFunctii::SchimbareSemn(FunctiePolinomiala f1)
{
	multimap<int, int> ::iterator it;
	multimap<int, int> schimbareSemn;

	for (it = f1.functie.begin(); it != f1.functie.end(); it++)
	{

		schimbareSemn.insert(make_pair((*it).first, -(*it).second));
	}

	return FunctiePolinomiala(schimbareSemn);
}
