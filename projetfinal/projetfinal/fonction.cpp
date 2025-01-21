#include "classe.hpp"
#include <iostream>

using namespace std;


int choix_instrument()
{
	int i = 0;
	int indexchoix;
	while (i == 0)
	{
		cout << "Bienvenue sur le projet !\n" << "Vous devez choisir un instrument.\n" << "1 pour le piano, 2 pour le xylophone, 3 pour la guitare : ";
		cin >> indexchoix;
        if (indexchoix == 1)
        {
            int index;
            cout << "Vous avez choisi le piano. Tapez 1 pour confirmer ou 0 pour revenir au menu : ";
            cin >> index;

            if (index == 1)
            {
                cout << "Vous avez confirmer le piano !\n";
                i = 1;
            }
            else
            {
                system("cls");
                cout << "Retour au menu...\n";
            }
        }
        else if (indexchoix == 2)
        {
            int index;
            cout << "Vous avez choisi le xylophone. Tapez 1 pour confirmer ou 0 pour revenir au menu : ";
            cin >> index;

            if (index == 1)
            {
                cout << "Vous confirmer le xylophone !\n";
                i = 1;
            }
            else
            {
                cout << "Retour au menu...\n";
            }
        }
        else if (indexchoix == 3)
        {
            int index;
            cout << "Vous avez choisi la guitare. Tapez 1 pour confirmer ou 0 pour revenir au menu : ";
            cin >> index;

            if (index == 1)
            {
                cout << "Vous confirmer la guitare !\n";
                i = 1;
            }
            else
            {
                cout << "Retour au menu...\n";
            }
        }
        else
        {
            system("cls");
            cout << "Entree incorrecte.\n";
        }
    }
    system("cls");
    return indexchoix;
}

int choix_musique()
{
    int i = 0;
    int indexchoix;
    while (i == 0)
    {
        cout << "Vous devez choisir une musique.\n" << "1 pour mario, 2 pour star wars : ";
        cin >> indexchoix;

        if (indexchoix == 1)
        {
            int index;
            cout << "Vous avez choisi mario. Tapez 1 pour confirmer ou 0 pour revenir au menu : ";
            cin >> index;
            system("cls");

            if (index == 1)
            {
                cout << "Vous avez confirmer mario !\n";
                i = 1;
            }
            else
            {
                system("cls");
                cout << "Retour au menu...\n";
            }
        }
        else if (indexchoix == 2)
        {
            int index;
            cout << "Vous avez choisi star wars. Tapez 1 pour confirmer ou 0 pour revenir au menu : ";
            cin >> index;
            system("cls");

            if (index == 1)
            {
                cout << "Vous confirmer star wars !\n";
                i = 1;
            }
            else
            {
                cout << "Retour au menu...\n";
            }
        }
        else
        {
            system("cls");
            cout << "Entree incorrecte.\n";
        }
    }
    return indexchoix;
}



string instrument::get_nom()
{
    return string(m_nom);
}



string musique::get_nom()
{
    return string(m_nom);
}