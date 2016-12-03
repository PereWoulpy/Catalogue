/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Element.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Catalogue>
//
//
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void Afficher () const;
    //Mode d'emploi : Afficher les trajets numérotés;
    
    void Ajouter (Trajet* tr);
    // mode d'emploi : Ajoute un trajet simple à la fin de la liste.
    
    void Rechercher (const char* dep, const char* arr) const;
    // Mode d'emploi : affiche les trajets disponibles entre les deux villes
    // saisies.
    
    bool Existe (const Trajet* tr) const;
    // Mode d'emploi : renvoie vrai si le trajet en paramètre existe déjà dans le catalogue
    
    int getNbTrajets () const;
    // Mode d'emploi ; retourne le nombre de trajets stockés dans le catalogue
    
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Catalogue ( const Catalogue & unCatalogue );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

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
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

Element* first;
Element* last;

};

//-------------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H
