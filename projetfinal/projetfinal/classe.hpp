#ifndef CLASSE
#define CLASSE

#include <iostream>

using namespace std;


int choix_instrument();
int choix_musique();

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