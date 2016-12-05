/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//--- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ---
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisees

#include "Trajet.h"
#include "Element.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <TrajetCompose>
// Trajet qui contient plusieurs trajets simples. Implementee en liste
// chainee.
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

    void Afficher () const;
    // Mode d'emploi : Affiche l'objet TrajetCompose, en affichant chacun 
    // des trajets 
    // simples qui le composent.

    const char* getDepart () const;
    // Mode d'emploi : renvoie la ville de depart du trajet complet.

    const char* getArrivee () const;
    // Mode d'emploi : renvoie la ville d'arrivee du trajet complet.

    void Ajouter (Trajet* tr);
    // Ajoute un trajet simple a la fin de la liste.
    //
    // Contrat : L'enchainement des differents trajets simples est licite
    // c'est a dire que l'arrivee de l'un correspond correspond au depart
    // du suivant

//-------------------------------------------- Constructeurs - destructeur

    TrajetCompose ( );

    virtual ~TrajetCompose ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges
Element* first;
Element* last;

};

//---------------------- Autres definitions dependantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H

