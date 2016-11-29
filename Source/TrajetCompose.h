/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées

#include "Trajet.h"
#include "Element.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
//
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
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
    // Mode d'emploi : Affiche l'objet TrajetCompose, en affichant chacun des trajets 
    //simples qui le composent.

    const char* getDepart () const;
    // Mode d'emploi : renvoie la ville de départ du trajet complet.

    const char* getArrivee () const;
    // Mode d'emploi : renvoie la ville d'arrivée du trajet complet.

    void Ajouter (Trajet* tr);
    // Ajoute un trajet simple à la fin de la liste.

    bool EstEgal(const Trajet * unTraj) const;
    // Mode d'emploi : Renvoie vrai si le trajet appelant est egal au trajet
    // en paramaètre.

//-------------------------------------------- Constructeurs - destructeur
    TrajetCompose ( const TrajetCompose & unTrajetCompose );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetCompose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetCompose ( );
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

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H

