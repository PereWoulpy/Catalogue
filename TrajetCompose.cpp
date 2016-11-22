/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

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

void TrajetCompose::Afficher ()
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

const char* TrajetCompose::getDepart ()
{
	return (first->getTraj())->getDepart();
}

const char* TrajetCompose::getArrivee ()
{
	return (last->getTraj())->getArrivee();
}

//-------------------------------------------- Constructeurs - destructeur
TrajetCompose::TrajetCompose ( const TrajetCompose & unTrajetCompose )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose (constructeur de copie)


TrajetCompose::TrajetCompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif

first = NULL;
last = NULL;

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
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

//----------------------------------------------------- Méthodes protégées

