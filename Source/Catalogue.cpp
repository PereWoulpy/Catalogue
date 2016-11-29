/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Catalogue::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Catalogue::Ajouter (Trajet* tr)
{
    if (last == NULL)
    {
        first = new Element(tr);
        last = first;
    }
    else
    {
        last->setNext(new Element(tr));
        last = last->getNext();
    }
}

void Catalogue::Afficher ()
{
    cout << "** CATALOGUE DES TRAJETS DISPONIBLES **"<< endl;
    Element* curseur = first;
    int compt = 1;
    while (curseur != last)
    {
        cout << compt << " - ";
        compt ++;
        (curseur->getTraj())->Afficher();
        cout << endl;
        curseur = curseur->getNext();
    }
    cout << compt << " - ";
    (curseur->getTraj())->Afficher();
    cout << endl;
}

void Catalogue::Rechercher (const char* dep, const char* arr)
{

    Element* curseur = first;
    int compt = 0;
    while (curseur != NULL)
    {
        if (strcmp((curseur->getTraj())->getDepart(), dep) == 0 && strcmp((curseur->getTraj())->getArrivee(), arr) == 0)
        {
            (curseur->getTraj())->Afficher();
            cout<< endl;
            compt ++;
        }
        curseur = curseur->getNext();
    }
    if (compt == 0)
    {
        cout << "Il n'y a pas de trajets disponibles pour votre requete."<<endl;
    }


}


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue ( const Catalogue & unCatalogue )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Catalogue>" << endl;
#endif
} //----- Fin de Catalogue (constructeur de copie)


Catalogue::Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif

first = NULL;
last = NULL;

} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif

Element* temp;
while (first != last)
{
    temp = first;
    first = temp->getNext();
    delete temp;
}
delete first;

} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

