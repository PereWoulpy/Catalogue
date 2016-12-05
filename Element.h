/*************************************************************************
                           Element  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Element> (fichier Element.h) --------
#if ! defined ( ELEMENT_H )
#define ELEMENT_H

//--------------------------------------------------- Interfaces utilisees

#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Element>
// Correspond a un maillon d'une liste chainee
//
//------------------------------------------------------------------------

class Element
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

    const Trajet* getTraj() const;
    //Recuperer trajet pointe.
    //Contrat : Ne pas modifier le retour et utiliser directement une 
    //methode associee
    
    void setNext(Element* n);
    //Permet de definir le prochain maillon de la chaine
    
    Element* getNext() const;
    //Recuperer le pointeur vers le prochain element de la liste. 

//-------------------------------------------- Constructeurs - destructeur

    Element (const Trajet* tr);
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
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges

Element* next;
const Trajet* traj;

};

//---------------------------- Autres definitions dependantes de <Element>

#endif // ELEMENT_H

