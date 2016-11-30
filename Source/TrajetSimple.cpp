/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

const char* TrajetSimple::getDepart () const
{
    return depart;
}

const char* TrajetSimple::getArrivee () const
{
    return arrivee;
}

void TrajetSimple::Afficher () const
{
    cout <<"De "<<depart<<" à "<<arrivee<<" en "<<transport;
}

bool TrajetSimple::EstEgal(const Trajet * unTraj) const
{
    return false;
}

void TrajetSimple::Ajouter (Trajet* tr){
    
}

//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple (const char* dep, const char* arr, const char* trans)
// Algorithme :
//
{   
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
arrivee = arr;

depart = dep;

transport = trans;

} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif

delete [] depart;
delete [] arrivee;
delete [] transport;

} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

