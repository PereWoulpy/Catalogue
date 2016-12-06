using namespace std;

#include <iostream>
#include <cstring>
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "Element.h"
#include "Catalogue.h"

//Fichier corespondant a l'executable

//Pour avoir une taille pour les chaine de caratere servant au cin
const int MAX_LENGTH = 32;

void Creer(Catalogue & c) {
    cout<<endl<<"**CREATION DE TRAJET**"<<endl;
    cout<<"Trajet simple (tapez 1) ou compose ";
    cout<<"(entrez votre nombre de trajets) : ";
    int nb;
    cin>>nb;
    
    char dep[MAX_LENGTH];
    char arr[MAX_LENGTH];
    char trans[MAX_LENGTH];
    
    if(nb == 1) {
        cout<<"Ville de depart : ";
        cin>>dep;
        cout<<"Ville d'arrivee : ";
        cin>>arr;
        cout<<"Moyen de transport : ";
        cin>>trans;
        TrajetSimple* nouv = new TrajetSimple(dep, arr, trans);
        
        cout<<"Voulvez-vous confirmer ? (0 pour non, 1 pour oui)"<<endl;
        cin>>nb;
        if(nb == 0) {
            cout<<"Annule."<<endl<<endl;
            delete nouv;
        }
        else {
            c.Ajouter(nouv);
            cout<<"Trajet cree."<<endl<<endl;
        }
    }
    else if(nb > 1) {
        TrajetCompose* nouv = new TrajetCompose();
        cout<<"Ville de depart : ";
        cin>>dep;
        for(int i=1 ; i<nb ; i++) {
            cout<<"Ville de l'escale "<<i<<" : ";
            cin>>arr;
            cout<<"Moyen de transport : ";
            cin>>trans;
            nouv->Ajouter(new TrajetSimple(dep, arr, trans));
            
            strcpy(dep, arr);
        }
        cout<<"Ville d'arrivee : ";
        cin>>arr;
        cout<<"Moyen de transport : ";
        cin>>trans;
        nouv->Ajouter(new TrajetSimple(dep, arr, trans));
        
        cout<<"Voulvez-vous confirmer ? (0 pour non, 1 pour oui)"<<endl;
        cin>>nb;
        if(nb == 0) {
            cout<<"Annule."<<endl<<endl;
            delete nouv;
        }
        else {
            c.Ajouter(nouv);
            cout<<"Trajet cree."<<endl<<endl;
        }
    }
}

void Rechercher(Catalogue & c) {
    cout<<endl<<"**RECHERCHE**"<<endl;
    char dep[MAX_LENGTH];
    char arr[MAX_LENGTH];
    
    cout<<"Ville de depart : ";
    cin>>dep;
    cout<<"Ville d'arrivee : ";
    cin>>arr;
    c.Rechercher(dep, arr);
}

int main() {
    
    cout<<"Bonjour, cher utilisateur."<<endl;
    cout<<"**MANUEL D'UTILISATION**"<<endl;
    cout<<"Tapez \"Quitter\" pour quitter, \"Catalogue\" pour ";
    cout<<"afficher le catalogue, \"Ajouter\" pour ajouter ";
    cout<<"un trajet au catalogue et \"Rechercher trajet\" ";
    cout<<"pour une recherche"<<endl<<endl;
    char entree[MAX_LENGTH];
    Catalogue cat;
    
    cin>>entree;
    while(strcmp("Quitter", entree) !=0) {
        
        if(strcmp("Catalogue", entree) == 0) {
            cout<<endl;
            cat.Afficher();
            cout<<endl;
        }
        
        if(strcmp("Ajouter", entree) == 0) {
            Creer(cat);
        }
        
        if(strcmp("Rechercher", entree) ==0) {
            Rechercher(cat);
            cout<<endl;
        }
        cin>>entree;
    }
    
    cout<<"Au revoir, et merci."<<endl;
    return 0;
}
