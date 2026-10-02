#ifndef EVENT //pour ne pas inclure plusieurs fois le même fichier .h
#define EVENT

#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
class Event
{
  private:
    int code;
    char* title;

  public: //ordre: les constructeurs, le destructeur, set et get, (les opérateurs), et puis les méthodes de classes
    //constructeur tjrs nom Classe.
    Event(); //par défaut
    Event(int a, const char* t);//initialisation
    Event(const Event&a);//copie
    
    //destructeur Tjrs nom Classe. Détruit automatiquement les variables de la classe, mais pas celles hors (comme les valeurs dynamiques de char*)
    ~Event();

    //set et get. Set = méthodes qui permettent de donner des valeurs au variables privées.
    void setCode(int a);
    void setTitle(const char* t);

    int getCode() const;
    const char* getTitle() const;

    //Méthode. Const ont leur importance et utilité. Ici = ne peut pas modifier les valeurs de la classe Event.
    void display() const;
};

#endif