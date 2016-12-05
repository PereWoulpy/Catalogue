/*************************************************************************
                           Catalogue  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Catalogue> (fichier Catalogue.cpp) 

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void Catalogue::Ajouter (const Trajet* tr)
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

void Catalogue::Afficher () const
{
    if(first == NULL) {
        cout<<"Le catalogue est pour le moment vide.";
        cout<<"Il ne tiens qu'a vous de le remplir."<<endl;
    }
    else {
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
}

void Catalogue::Rechercher (const char* dep, const char* arr) const
{

    Element* curseur = first;
    int compt = 0;
    cout<<endl<<"RESULTATS : "<<endl;
    while (curseur != NULL)
    {
        if (strcmp((curseur->getTraj())->getDepart(), dep) == 0 &&
        strcmp((curseur->getTraj())->getArrivee(), arr) == 0)
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

//------------------------------------------------- Surcharge d'operateurs

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif

    first = NULL;
    last = NULL;

} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
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

//----------------------------------------------------- Methodes protegees

