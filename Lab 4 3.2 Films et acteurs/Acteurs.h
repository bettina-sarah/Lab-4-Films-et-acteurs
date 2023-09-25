#ifndef ACTEURS_H
#define ACTEURS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Acteur_s
{
	int ID; // commence a 1
	string NomComplet;
};

void AjouterActeur(string NomActeur);
void AfficheActeurs();
Acteur_s TrouverActeur(int IdTrouver);


#endif