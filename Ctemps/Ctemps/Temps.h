#pragma once
class Temps
{
private:
	int heure;
	int minute;
	int seconde;
public:
	Temps(); //constructeur par defaut permet d'initialiser le temps
	Temps(int, int, int);//constructeur avec param
	void heureF();//affichage francais
	void heureA();//affichage anglais
	void lireClavier();//lecture d'heure a partir du clavier
	bool operator<(Temps const&a);//surcharge de loperateur "<" pour la comparaison
	Temps operator+(const Temps& T);//surcharge de loperateur "+"


};

