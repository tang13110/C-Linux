#ifndef EVENT //pour ne pas inclure plusieurs fois le même fichier .h lors de la compilation
#define EVENT

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <Timing.h>
using namespace std;
class Event
{
  private:
    int code;
    char* title;
    Timing* timing;

  public: //ordre: les constructeurs, le destructeur, set et get, (les opérateurs), et puis les méthodes de classes
    //Variables statiques
    static int currentCode;

    //constructeur
    Event(); 
    Event(int a, const char* t);
    Event(const Event&a);
    
    //destructeur
    ~Event();

    //set et get.
    void setCode(int a);
    void setTitle(const char* t);
    void setTiming(Timing);

    int getCode() const;
    const char* getTitle() const;
    Timing getTiming() const;

    //Méthode. 
    void display() const;
};

#endif