/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <TrajetSimple>
// Trajet qui est direct. Il ne contient qu'une ville de depart, d'arrivee
// et un moyen de transport
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

    void Afficher () const;
    // Mode d'emploi : affiche le depart, l'arrivee et le moyen de
    // transport du trajet.

    const char* getDepart () const;
    // Mode d'emploi : renvoie la ville de depart du trajet.

    const char* getArrivee () const;
    // Mode d'emploi : renvoie la ville d'arrivee du trajet.

//-------------------------------------------- Constructeurs - destructeur

    TrajetSimple (const char* dep, const char* arr, const char* trans);
    // Mode d'emploi : Initialise les attributs avec chaque parametre

    virtual ~TrajetSimple ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges
    char* arrivee;
    char* depart;
    char* transport;
};

//----------------------- Autres definitions dependantes de <TrajetSimple>

#endif // TRAJETSIMPLE_H

