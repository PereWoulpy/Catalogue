/*************************************************************************
                           Element  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Element> (fichier Element.h) ----------------
#if ! defined ( ELEMENT_H )
#define ELEMENT_H

//--------------------------------------------------- Interfaces utilisées

#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Element>
//
//
//------------------------------------------------------------------------

class Element
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    //void Ajouter(Element* lTr);
    // Mode d'emploi : Initialise le pointeur next vers un autre élément
    
    Trajet* getTraj();
    //Récupérer trajet pointé.
    
    void setNext(Element* n);
    
    Element* getNext();
    //Récupérer le pointeur vers le prochain élément de la liste. 


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
    Element ( const Element & unElement );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Element (Trajet* tr);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Element ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

Element* next;
Trajet* traj;

};

//-------------------------------- Autres définitions dépendantes de <Element>

#endif // ELEMENT_H

