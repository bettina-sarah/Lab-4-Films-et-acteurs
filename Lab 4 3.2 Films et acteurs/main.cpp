#include <string>
#include <iostream>
#include <vector>
#include "Acteurs.h";

extern const string CompagnieDeProduction;

extern int ActeurDernierOscar;

void main(void)
{

	AjouterActeur("Brad Pitt");
	AfficheActeurs();
	AjouterActeur("Angelina Jolie");
	AjouterActeur("Arnold Schwarzennegger");
	AjouterActeur("Cillian Murphy");
	AfficheActeurs();
	cout << "Acteur numero 3";
	cout << TrouverActeur(2).ID << "\t" << TrouverActeur(2).NomComplet;
}