/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//- Realisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) -

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void TrajetCompose::Ajouter (Trajet* tr)
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

void TrajetCompose::Afficher () const
{
    Element* curseur = first;
    while (curseur != last)
    {
        (curseur->getTraj())->Afficher();
        cout << " - ";
        curseur = curseur->getNext();
    }
    (curseur->getTraj())->Afficher();
}

const char* TrajetCompose::getDepart () const
{
    return (first->getTraj())->getDepart();
}

const char* TrajetCompose::getArrivee () const
{
    return (last->getTraj())->getArrivee();
}

//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif

first = NULL;
last = NULL;

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme : il doit liberer la memoir de chaque maillon de la chaine.
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
Element* temp;
while (first != last)
{
    temp = first;
    first = temp->getNext();
    delete temp;
}
delete first;

} //----- Fin de ~TrajetCompose

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
