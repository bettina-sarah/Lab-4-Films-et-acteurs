#ifndef FILMS_H
#define FILMS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Film_s
{
	int ID; // commence a 1
	string NomFilm;
	string Directeur;
	int IDPrincipal;
	int IDSecondaire;
};

void AjouterFilm(string NomDuFilm, string NomDuDirecteur, int IDActeurPrincipal, int IDActeurSecondaire);
void AfficherFilms();

#endif