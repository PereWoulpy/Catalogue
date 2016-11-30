using namespace std;

#include <iostream>
#include <cstring>
#include "../Source/TrajetSimple.h"
#include "../Source/TrajetCompose.h"
#include "../Source/Element.h"
#include "../Source/Catalogue.h"

const int MAX_LENGTH = 32;

void Creer(Catalogue & c) {
    cout<<endl<<"**CREATION DE TRAJET**"<<endl<<"Trajet simple (tapez 1) où composé (entrez votre nombre de trajets) : ";
    int nb;
    cin>>nb;
    
    char* dep = new char[MAX_LENGTH];
    char* arr = new char[MAX_LENGTH];
    char* trans = new char[MAX_LENGTH];
    
    Trajet* nouv;
    
    if(nb == 1) {
        cout<<"Ville de départ : ";
        cin>>dep;
        cout<<"Ville d'arrivée : ";
        cin>>arr;
        cout<<"Moyen de transport : ";
        cin>>trans;
        nouv = new TrajetSimple(dep, arr, trans);
    }
    else if(nb > 1) {
        nouv = new TrajetCompose();
        cout<<"Ville de départ : ";
        cin>>dep;
        for(int i=1 ; i<nb ; i++) {
            cout<<"Ville de l'escale "<<i<<" : ";
            cin>>arr;
            cout<<"Moyen de transport : ";
            cin>>trans;
            nouv->Ajouter(new TrajetSimple(dep, arr, trans));
            
            dep = new char[MAX_LENGTH];
            strcpy(dep, arr);
            arr = new char[MAX_LENGTH];
            trans = new char[MAX_LENGTH];
        }
        cout<<"Ville d'arrivée : ";
        cin>>arr;
        cout<<"Moyen de transport : ";
        cin>>trans;
        nouv->Ajouter(new TrajetSimple(dep, arr, trans));
    }
    
    if(c.Existe(nouv)) {
        cout<<"Ce trajet existe déjà dans le catalogue"<<endl;
        delete nouv;
    }
    else {
        cout<<"Voulvez-vous confirmer ? 0 pour non, 1 pour oui"<<endl;
        cin>>nb;
        if(nb == 0) {
            cout<<"Annule"<<endl;
            delete nouv;
        }
        else {
            c.Ajouter(nouv);
            cout<<"Trajet Cree"<<endl;
        }
    }
}

void Rechercher(Catalogue & c) {
    cout<<endl<<"**RECHERCHE**"<<endl;
    char dep[MAX_LENGTH];
    char arr[MAX_LENGTH];
    
    cout<<"Ville de départ?"<<endl;
    cin>>dep;
    cout<<"Ville d'arrivée?"<<endl;
    cin>>arr;
    c.Rechercher(dep, arr);
}

int main() {
    
    cout<<"Bonjour, cher utilisateur."<<endl;
    cout<<"**MANUEL D'UTILISATION**"<<endl;
    cout<<"Tapez \"Quitter\" pour quitter, \"Catalogue\" pour afficher le catalogue, "<<endl;
    cout<<"\"Ajouter\" pour ajouter un trajet au catalogue et \"Chercher trajet\" pour une recherche"<<endl;
    char entree[MAX_LENGTH];
    Catalogue cat;
    
    cin>>entree;
    while(strcmp("Quitter", entree) !=0) {
        
        if(strcmp("Afficher", entree) == 0) {
            cout<<endl;
            cat.Afficher();
        }
        
        if(strcmp("Ajouter", entree) == 0) {
            Creer(cat);
        }
        
        if(strcmp("Chercher trajet", entree) ==0) {
            Rechercher(cat);
        }
        cin>>entree;
    }
    
    cout<<"Au revoir, et merci."<<endl;
    return 0;
}
