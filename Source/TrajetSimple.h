/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    
	void Afficher ();
	// Mode d'emploi : affiche le depart, l'arrivee et le moyen de transport du trajet.
	
	const char* getDepart ();
	// Mode d'emploi : renvoie la ville de départ du trajet.
	
	const char* getArrivee ();
    // Mode d'emploi : renvoie la ville d'arrivée du trajet.

//-------------------------------------------- Constructeurs - destructeur
    TrajetSimple ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetSimple (const char* dep, const char* arr, const char* trans);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
	char* arrivee;
	char* depart;
	char* transport;

};

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TRAJETSIMPLE_H

