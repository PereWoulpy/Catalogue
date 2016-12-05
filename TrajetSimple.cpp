/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//-- Realisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

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
    cout <<"De "<<depart<<" a "<<arrivee<<" en "<<transport;
}

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple (const char* dep, const char* arr, const char* trans)
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
arrivee = new char[strlen(arr)+1];
strcpy(arrivee, arr);

depart = new char[strlen(dep)+1];
strcpy(depart, dep);

transport = new char[strlen(trans)+1];
strcpy(transport, trans);

} //----- Fin de TrajetSimple

TrajetSimple::~TrajetSimple ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif

delete [] depart;
delete [] arrivee;
delete [] transport;

} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

