using namespace std;

#include <iostream>
#include <cstring>
#include "../Source/TrajetSimple.h"
#include "../Source/TrajetCompose.h"
#include "../Source/Element.h"
#include "../Source/Catalogue.h"

//Fichier des tests "unitaires" (a peu pres)

void TestTrajetSimple()
//Test la bonne creation d'un trajet simple et les methodes de la classe
{
    
    TrajetSimple ts("Lyon", "Grenoble", "Chameau");
    ts.Afficher();
    cout<<endl<<ts.getDepart()<<endl<<ts.getArrivee()<<endl;   
}

void TestTrajetCompse()
//Test la bonne creation d'un trajet compose et ses methodes
{
    TrajetSimple* ts1 = new TrajetSimple("Lyon", "Grenoble", "Chameau");
    TrajetSimple* ts2 = new TrajetSimple("Grenoble", "Paris", "Pingouin");
    
    TrajetCompose tc;
    tc.Ajouter(ts1);
    tc.Afficher();
    cout << endl;
    cout <<tc.getDepart()<<endl<<tc.getArrivee()<<endl;
    tc.Ajouter(ts2);
    tc.Afficher();
    cout << endl;
    cout <<tc.getDepart()<<endl<<tc.getArrivee()<<endl;
}

void TestCatalogue() 
// Test la creation d'un catalogue, sa creation, son affichage et la recharche
{
    TrajetSimple* ts5 = new TrajetSimple("Lyon", "Grenoble", "Chameau");
    TrajetSimple* ts6 = new TrajetSimple("Grenoble", "Paris", "Pingouin");
    TrajetCompose* tc2 = new TrajetCompose();
    tc2->Ajouter(ts5);
    tc2->Ajouter(ts6);
    
    TrajetSimple* ts3 = new TrajetSimple("Marseille", "Strasbourg", "Lama");
    TrajetSimple* ts4 = new TrajetSimple("Strasbourg", "Pau", "Canari");
    TrajetCompose* tc1 = new TrajetCompose();
    tc1->Ajouter(ts3);
    tc1->Ajouter(ts4);
    
    TrajetSimple* ts1 = new TrajetSimple("Quimper", "Bordeaux", "Scooter");
    TrajetSimple* ts2 = new TrajetSimple("Montpellier", "Veau-en-Velin",
    "Platipus");
    TrajetSimple* ts7 = new TrajetSimple("Quimper", "Bordeaux", "Baleine");
    
    Catalogue cat;
    cat.Ajouter(ts1);
    cat.Ajouter(tc1);
    cat.Ajouter(tc2);
    cat.Ajouter(ts2);
    cat.Ajouter(ts7);
    cat.Afficher();
    cat.Rechercher("Lyon", "Paris");
    cat.Rechercher("Quimper", "Bordeaux");
    cat.Rechercher("Marseille", "Strasbourg");
    cat.Rechercher("Erule", "Tatouille");
}

int main() {
    //TestTrajetSimple();
    //TestTrajetComose();
    //TestCatalogue();
    return 0;
}
