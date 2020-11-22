#include "Temps.h"
#include <iostream>
#include<string>
using namespace std;

Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde= 0;

}

Temps::Temps(int H, int M, int S)
{
	this->heure = H;
	this->minute = M;
	this->seconde = S;
}

void Temps::heureF()
{
	string s;
	s = to_string(this->heure) + ":" + to_string(this->minute) + ":" + to_string(this->seconde);
	cout << s << endl;
}

void Temps::heureA()
{
	if (heure <= 12) // Si lheure donnée par l utilisateur et inferieure a 12H donc on va la convertir en ajoutant 12H de plus 
	{
		heure += 12;
		string s1;
		s1 = to_string(this->heure) + ":" + to_string(this->minute) + ":" + to_string(this->seconde) + "PM";
		cout << s1 << endl;
		
	}
	else
	{
		heure -= 12;// Sinon on enleve 12H
		string s2;
		s2 = to_string(this->heure) + ":" + to_string(this->minute) + ":" + to_string(this->seconde) + "PM";
		cout << s2 << endl;
	}

}

void Temps::lireClavier()
{
	cout << "Donner heure" << endl;
	cin >> heure;	
	cout << "Donner minute" << endl;
	cin >> minute;
	cout << "Donner seconde" << endl;
	cin >> seconde;
	
}

bool Temps::operator<(Temps const& t) // je vais tester sur les heures et les minutes et les secondes
{
	if (heure < t.heure) 
	{ 
		return true;
	}
	else if (heure < t.heure && minute < t.minute)
	{
		return true;
	}
	else if (heure < t.heure && minute < t.minute && seconde < t.seconde)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Temps Temps::operator+(const Temps& T)  
{
	Temps res;
	res.heure = this->heure + T.heure;
	return res;
}
