#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include<iostream>
#include<string>
#include"Arme.h"

class Personnage
{
public:

	Personnage(); //Constructeur
	Personnage(std::string nomArme, int degatsArme);
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat() const;
	~Personnage();

private:

	int m_vie;
	int m_mana;
	Arme m_arme; // Notre personnage poss�de une arme
};

#endif
