/*************************************************************************
                           Catalogue  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"
#include "Element.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Catalogue>
// Gere la collection de Trajet, elle peut l'afficher, ajouter un trajet
// ou rechercher un trajet. Implementee en liste chainee
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    // type Methode ( liste des parametres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void Afficher () const;
    //Mode d'emploi : Afficher les trajets numerotes;
    
    void Ajouter (const Trajet* tr);
    // mode d'emploi : Ajoute un trajet simple a la fin de la liste.
    
    void Rechercher (const char* dep, const char* arr) const;
    // Mode d'emploi : affiche les trajets disponibles entre les deux villes
    // saisies.
//------------------------------------------------- Surcharge d'operateurs

//-------------------------------------------- Constructeurs - destructeur

    Catalogue ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Catalogue ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges

Element* first;
Element* last;

};

//-------------------------- Autres definitions dependantes de <Catalogue>

#endif // CATALOGUE_H
