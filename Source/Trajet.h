/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types  

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void Afficher () const = 0;
    // Mode d'emploi : Affiche l'objet Trajet.
    //
    // Contrat : L'affichage tiens compte de la nature de l'objet, composé
    // ou simple. 
    
    virtual const char* getDepart () const = 0;
    // Mode d'emploi : renvoie la ville de départ du trajet.
    
    virtual const char* getArrivee () const = 0;
    // Mode d'emploi : renvoie la ville d'arrivée du trajet.

    virtual bool EstEgal(const Trajet * unTraj) const = 0;
    // Mode d'emploi : Renvoie vrai si le trajet appelant est egal au trajet
    // en paramaètre.

//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // TRAJET_H

