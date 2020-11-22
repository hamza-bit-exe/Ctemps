
#include <iostream>
#include "Temps.h"
using namespace std;

int main()
{
	char rep;
	Temps T3;
	T3.lireClavier();
	cout << "Comment voulez vous afficher l heure (A/F) ?" << endl;
	cin >> rep;
	if (rep == 'A' || rep == 'a')
	{
		T3.heureA();
	}
	else if (rep == 'F' || rep == 'f')
	{
		T3.heureF();
	}
	else
	{
		cout << "Entrez soit (A) soit (F) svp!";
	}

	Temps T2(13, 25, 30);
	if (T3 < T2)
	{
		cout << "Le temps que vous avez donne est inferieur a 13:25:30" << endl;
	}
	else
	{
		cout << "Le temps que vous avez donne est superieur a 13:25:30" << endl;
	}
}

