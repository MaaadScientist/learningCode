/*
Nom : Objets2
Auteur : Quentin MONNIER
Date : 20/11/2019

Programme pour se familiariser avec les classes


*/

#include<iostream>
#include<string>
#include"Personnage.h"


using namespace std;



int main()
{
	Personnage david, goliath("Epee aiguisee", 20);
	//Création de 2 objets de type Personnage : david et goliath

	goliath.attaquer(david);    //goliath attaque david
	david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
	goliath.attaquer(david);    //goliath réattaque david
	david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?
	goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
	goliath.attaquer(david);

	// Temps mort ! Voyons la vie de chacun...
	cout << "David" << endl;
	david.afficherEtat();
	cout << endl << "Goliath" << endl;
	goliath.afficherEtat();


	return 0;
}