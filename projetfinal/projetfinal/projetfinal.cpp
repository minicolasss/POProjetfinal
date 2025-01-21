#include "classe.hpp"
#include <iostream>

using namespace std;

int main()
{
	instrument piano = instrument("piano");
	instrument xylophone = instrument("xylophone");
	instrument guitare = instrument("guitare");

	int choix = choix_instrument();

	if (choix == 1)
	{
		int choixmus = choix_musique();
	}

	if (choix == 2)
	{
		int choixmus = choix_musique();
	}

	if (choix == 3)
	{
		int choixmus = choix_musique();
	}


}
