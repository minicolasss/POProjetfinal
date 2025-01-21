#include "classe.hpp"
#include <iostream>
#include <chrono>
#include <map>
#include <vector>

using namespace std;

int main()
{
	instrument piano = instrument("piano");
	instrument xylophone = instrument("xylophone");
	instrument guitare = instrument("guitare");

	vector<pair<string, double>> marioclassique = {
	   {"Unknown", 0.083}, {"0", 0.083}, {"E7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"E7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"C7", 0.083}, {"0", 0.083},
	   {"E7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"G7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"G6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"C7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"G6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"E6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"A6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"B6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"A#6", 0.083}, {"0", 0.083},
	   {"A6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"G6", 0.111}, {"0", 0.111}, {"E7", 0.111}, {"0", 0.111},
	   {"G7", 0.111}, {"0", 0.111}, {"A7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"F7", 0.083}, {"0", 0.083},
	   {"G7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"E7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"C7", 0.083}, {"0", 0.083}, {"D7", 0.083}, {"0", 0.083},
	   {"B6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"C7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"G6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"E6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"A6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"B6", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"A#6", 0.083}, {"0", 0.083}, {"A6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"G6", 0.111}, {"0", 0.111},
	   {"E7", 0.111}, {"0", 0.111}, {"G7", 0.111}, {"0", 0.111},
	   {"A7", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083},
	   {"F7", 0.083}, {"0", 0.083}, {"G7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"E7", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"C7", 0.083}, {"0", 0.083},
	   {"D7", 0.083}, {"0", 0.083}, {"B6", 0.083}, {"0", 0.083},
	   {"0", 0.083}, {"0", 0.083}, {"0", 0.083}, {"0", 0.083}
	};
	vector<pair<string, double>> starwarsclassique = {
	{"A#1", 0.125}, {"0", 0.1625}, {"A#1", 0.125}, {"0", 0.1625},
	{"A#1", 0.125}, {"0", 0.1625}, {"F2", 0.25}, {"0", 0.325},
	{"C2", 0.125}, {"0", 0.1625}, {"A#2", 0.25}, {"0", 0.325},
	{"A2", 0.25}, {"0", 0.325}, {"G2", 0.125}, {"0", 0.1625},
	{"F1", 0.0625}, {"0", 0.08125}, {"C1", 0.25}, {"0", 0.325},
	{"A#2", 0.25}, {"0", 0.325}, {"A2", 0.25}, {"0", 0.325},
	{"G2", 0.125}, {"0", 0.1625}, {"F1", 0.0625}, {"0", 0.08125},
	{"C1", 0.25}, {"0", 0.325}, {"A#2", 0.25}, {"0", 0.325},
	{"A2", 0.25}, {"0", 0.325}, {"G2", 0.125}, {"0", 0.1625},
	{"F1", 0.0625}, {"0", 0.08125}, {"C1", 0.25}, {"0", 0.325},
	{"A#2", 0.25}, {"0", 0.325}, {"A2", 0.25}, {"0", 0.325},
	{"A#2", 0.25}, {"0", 0.325}, {"G2", 0.25}, {"0", 0.325},
	{"C1", 0.25}, {"0", 0.325}, {"C1", 0.25}, {"0", 0.325},
	{"C1", 0.25}, {"0", 0.325}, {"F2", 0.25}, {"0", 0.325},
	{"C2", 0.125}, {"0", 0.1625}, {"A#2", 0.25}, {"0", 0.325},
	{"A2", 0.25}, {"0", 0.325}, {"G2", 0.125}, {"0", 0.1625},
	{"F1", 0.0625}, {"0", 0.08125}, {"C1", 0.25}, {"0", 0.325},
	{"A#2", 0.25}, {"0", 0.325}, {"A2", 0.25}, {"0", 0.325},
	{"G2", 0.125}, {"0", 0.1625}, {"F1", 0.0625}, {"0", 0.08125},
	{"C1", 0.25}, {"0", 0.325}, {"A#2", 0.25}, {"0", 0.325},
	{"A2", 0.25}, {"0", 0.325}
	};



	int choix = choix_instrument();

	if (choix == 1)
	{
		int choixmus = choix_musique();
		if (choixmus == 1)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique mario lent ce joue avec le piano";
				play_music(marioclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique mario classique ce joue avec le piano";
				play_music(marioclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique mario rapide ce joue avec le piano";
				play_music(marioclassique, 0.5);
			}


		}
		if (choixmus == 2)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique star wars lent ce joue avec le piano";
				play_music(starwarsclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique star wars classique ce joue avec le piano";
				play_music(starwarsclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique star wars rapide ce joue avec le piano";
				play_music(starwarsclassique, 0.5);
			}
		}
	}

	if (choix == 2)
	{
		int choixmus = choix_musique();
		if (choixmus == 1)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique mario lent ce joue avec le xylophone";
				play_music(marioclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique mario classique ce joue avec le xylophone";
				play_music(marioclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique mario rapide ce joue avec le xylophone";
				play_music(marioclassique, 0.5);
			}
		}
		if (choixmus == 2)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique star wars lent ce joue avec le xylophone";
				play_music(starwarsclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique star wars classique ce joue avec le xylophone";
				play_music(starwarsclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique star wars rapide ce joue avec le xylophone";
				play_music(starwarsclassique, 0.5);
			}
		}
	}

	if (choix == 3)
	{
		int choixmus = choix_musique();
		if (choixmus == 1)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique mario lent ce joue avec la guitare";
				play_music(marioclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique mario classique ce joue avec la guitare";
				play_music(marioclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique mario rapide ce joue avec la guitare";
				play_music(marioclassique, 0.5);
			}
		}
		if (choixmus == 2)
		{
			int choixryt = choix_rythme();
			if (choixryt == 1)
			{
				cout << "la musique star wars lent ce joue avec la guitare";
				play_music(starwarsclassique, 1.5);
			}
			if (choixryt == 2)
			{
				cout << "la musique star wars classique ce joue avec la guitare";
				play_music(starwarsclassique, 1.0);
			}
			if (choixryt == 3)
			{
				cout << "la musique star wars rapide ce joue avec la guitare";
				play_music(starwarsclassique, 0.5);
			}
		}
	}


}
