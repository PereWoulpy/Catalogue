using namespace std;

#include <iostream>
#include <cstring>
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "Element.h"
#include "Catalogue.h"

const int MAX_LENGTH = 64;

void Creer(Catalogue & c) {
    cout<<"Creation"<<endl<<"Compo du trajet : ";
    int nb;
    cin>>nb;
    
    char* dep = new char[MAX_LENGTH];
    char* arr = new char[MAX_LENGTH];
    char* trans = new char[MAX_LENGTH];
    
    if(nb == 1) {
        cout<<"depart"<<endl;
        cin>>dep;
        cout<<"arrivee"<<endl;
        cin>>arr;
        cout<<"transport"<<endl;
        cin>>trans;
        c.Ajouter(new TrajetSimple(dep, arr, trans));
    }
    else if(nb > 1) {
        TrajetCompose* nouv = new TrajetCompose();
        cout<<"depart"<<endl;
        cin>>dep;
        for(int i=1 ; i<nb ; i++) {
            cout<<"escale "<<i<<endl;
            cin>>arr;
            cout<<"transport"<<endl;
            cin>>trans;
            nouv->Ajouter(new TrajetSimple(dep, arr, trans));
            
            dep = new char[MAX_LENGTH];
            strcpy(dep, arr);
            arr = new char[MAX_LENGTH];
            trans = new char[MAX_LENGTH];
        }
        cout<<"arrivee"<<endl;
        cin>>arr;
        cout<<"transport"<<endl;
        cin>>trans;
        nouv->Ajouter(new TrajetSimple(dep, arr, trans));
        
        c.Ajouter(nouv);
    }
    cout<<"Creation effectuee"<<endl;
}

void Rechercher(Catalogue & c) {
    cout<<"Recherche"<<endl;
    char dep[MAX_LENGTH];
    char arr[MAX_LENGTH];
    
    cout<<"depart"<<endl;
    cin>>dep;
    cout<<"arrivee"<<endl;
    cin>>arr;
    c.Rechercher(dep, arr);
}

int main() {
    
    cout<<"Bonjour, blabla, bullshit"<<endl;
    char entree[MAX_LENGTH];
    Catalogue cat;
    
    cin>>entree;
    while(strcmp("bye", entree) !=0) {
        
        if(strcmp("disp", entree) == 0) {
            cat.Afficher();
        }
        
        if(strcmp("add", entree) == 0) {
            Creer(cat);
        }
        
        if(strcmp("find", entree) ==0) {
            Rechercher(cat);
        }
        cin>>entree;
    }
    
    cout<<"Au revoir"<<endl;
    return 0;
}
