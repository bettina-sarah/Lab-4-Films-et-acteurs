#include <string>
#include <iostream>
#include <vector>
#include "Acteurs.h";
#include "Films.h";


extern const string CompagnieDeProduction;

extern int ActeurDernierOscar;

void main(void)
{
	cout << CompagnieDeProduction << "\n";
	AjouterActeur("Brad Pitt");
	AfficheActeurs();
	AjouterActeur("Angelina Jolie");
	AjouterActeur("Arnold Schwarzennegger");
	AjouterActeur("Cillian Murphy");
	AfficheActeurs();
	cout << "Acteur numero 1 est : ";
	cout << TrouverActeur(9000).ID << "\t" << TrouverActeur(9000).NomComplet << "\n\n";
	AjouterFilm("Kill Bill", "Tarantino", TrouverActeur(9000).ID, TrouverActeur(9001).ID);
	AjouterFilm("Titanic  ", "Hahahaha", TrouverActeur(9002).ID, TrouverActeur(9001).ID);
	AjouterFilm("Oppenheimer", "Nolan    ", TrouverActeur(9003).ID, TrouverActeur(9002).ID);
	AfficherFilms();


	ActeurDernierOscar = TrouverActeur(9002).ID;
	cout << "Acteur qui gagne le Oscar est: " << TrouverActeur(ActeurDernierOscar).NomComplet;
}