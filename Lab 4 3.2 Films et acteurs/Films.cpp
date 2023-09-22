//les donn�es doivent �tre visibles dans ce module seulement alors que les types/structures 
//et actions doivent �tre utilisables dans les autres modules.

#include <string>
#include <iostream>
#include <vector>
#include "Acteurs.h";

using namespace std;

struct Film_s
{
	int ID; // commence a 1
	string NomFilm;
	string Directeur;
	int IDPrincipal;
	int IDSecondaire;
};

extern const string CompagnieDeProduction = "ACME Films";

static int IdFilm = 0;