/*************************************************************************
                           Trajet  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types  

//------------------------------------------------------------------------
// Role de la classe <Trajet>
// Classe abstraite pure pour ses descendants : TrajetSimple et 
// TrajetCompose
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    virtual void Afficher () const = 0;
    // Mode d'emploi : Affiche l'objet Trajet.
    //
    // Contrat : L'affichage tiens compte de la nature de l'objet, compose
    // ou simple. 
    
    virtual const char * getDepart () const = 0;
    // Mode d'emploi : renvoie la ville de depart du trajet.
    
    virtual const char* getArrivee () const = 0;
    // Mode d'emploi : renvoie la ville d'arrivee du trajet.

//-------------------------------------------- Constructeurs - destructeur

    Trajet ( );
    // Mode d'emploi : Ne jamais utiliser

    virtual ~Trajet ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges

};

//----------------------------- Autres definitions dependantes de <Trajet>

#endif // TRAJET_H

