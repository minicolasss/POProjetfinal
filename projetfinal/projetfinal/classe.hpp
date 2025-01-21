#ifndef CLASSE
#define CLASSE

#include <iostream>
#include <vector> 

using namespace std;


int choix_instrument();
int choix_musique();
int choix_rythme();
void play_music(const vector<pair<string, double>>& music, double speed_factor = 1.0);

class instrument
{
private : 
	string m_nom; 


public :
	instrument(const string& nom) : m_nom(nom) {}


	string get_nom();
};

class musique
{
private :
	string m_nom;



public :
	musique(const string& nom) : m_nom(nom) {}

	string get_nom();

};


class rhyme : private musique
{

};













#endif