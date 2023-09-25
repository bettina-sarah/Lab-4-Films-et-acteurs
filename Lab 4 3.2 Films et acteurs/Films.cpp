//les données doivent être visibles dans ce module seulement alors que les types/structures 
//et actions doivent être utilisables dans les autres modules.

#include <string>
#include <iostream>
#include <vector>
#include "Acteurs.h";
#include "Films.h";

using namespace std;

extern const string CompagnieDeProduction = "ACME Films";

static int IdFilm = 1;

vector <Film_s> ListeFilms;

void AjouterFilm(string NomDuFilm, string NomDuDirecteur, int IDActeurPrincipal, int IDActeurSecondaire)
{
	Film_s NouvelFilm = { IdFilm, NomDuFilm, NomDuDirecteur, IDActeurPrincipal, IDActeurSecondaire };
	ListeFilms.push_back(NouvelFilm);
	IdFilm++;
}

void AfficherFilms()
{
	cout << "\n\nLISTE FILMS\n";
	for (int i = 0; i < ListeFilms.size(); i++)
	{
		cout << ListeFilms[i].ID << "\t" << ListeFilms[i].NomFilm <<"\t"<< ListeFilms[i].Directeur << "\t" << TrouverActeur(ListeFilms[i].IDPrincipal).NomComplet << "\t" << TrouverActeur(ListeFilms[i].IDSecondaire).NomComplet << "\n";
	}

}