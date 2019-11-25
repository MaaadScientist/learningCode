#include "Personnage.h"
#include "Arme.h"
using namespace std;


Personnage::Personnage() : m_vie(100), m_mana(100)
{
	//Rien � mettre dans le corps du constructeur, tout a d�j� �t� fait !
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_arme(nomArme,degatsArme)
{

}

Personnage::~Personnage()
{

}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	//On enl�ve le nombre de d�g�ts re�us � la vie du personnage

	if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
	{
		m_vie = 0; //On met la vie � 0 (cela veut dire mort)
	}
}

void Personnage::attaquer(Personnage& cible)
{
	cible.recevoirDegats(m_arme.getDegats());
	//On inflige � la cible les d�g�ts que fait notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;

	if (m_vie > 100)
	{
		m_vie = 100;
	}
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
	return m_vie > 0;
}

void Personnage::afficherEtat() const
{
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	m_arme.afficher();

}


