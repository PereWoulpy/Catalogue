/*************************************************************************
                           Element  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Element> (fichier Element.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Element.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Element::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

/*void Element::Ajouter(Element* lTr)
{
    next = lTr;
}
*/
const Trajet* Element::getTraj() const
{
    return traj;
}

void Element::setNext(Element* n) 
{
    next = n;
}

Element* Element::getNext() const
{
    return next;
}


//-------------------------------------------- Constructeurs - destructeur
Element::Element ( const Element & unElement )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Element>" << endl;
#endif
} //----- Fin de Element (constructeur de copie)


Element::Element (const Trajet * tr)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Element>" << endl;
#endif

traj = tr;
next = NULL;

} //----- Fin de Element


Element::~Element ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Element>" << endl;
#endif

delete traj;

} //----- Fin de ~Element


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

