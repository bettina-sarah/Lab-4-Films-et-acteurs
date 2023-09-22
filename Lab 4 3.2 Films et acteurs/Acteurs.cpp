//les données doivent être visibles dans ce module seulement alors que les types/structures 
//et actions doivent être utilisables dans les autres modules.

#include <string>
#include <iostream>
#include <vector>
#include "Acteurs.h";

using namespace std;

int ActeurDernierOscar = 0;

static int IdActeur = 1;

Acteur_s ActeurPrincipal;
Acteur_s ActeurSecondaire;

vector <Acteur_s> ListeActeurs;

void AjouterActeur(string NomActeur)
{
	Acteur_s NouvelActeur = { IdActeur, NomActeur };
	ListeActeurs.push_back(NouvelActeur);
	IdActeur++;
}

void AfficheActeurs()
{
	cout << "\n\nLISTE ACTEURS\n";
	for (int i = 0; i < ListeActeurs.size(); i++)
	{
		cout << ListeActeurs[i].ID << "\t" << ListeActeurs[i].NomComplet << "\n";
	}
}

Acteur_s TrouverActeur(int IdTrouver)
{
	return ListeActeurs[IdTrouver];
}