/*************************************************************************
                           Element  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Element> (fichier Element.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Element.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

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

//----------------------------------------------------- Methodes protegees

