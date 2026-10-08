#include "Event.h"

//Variables statiques
int Event::currentCode = 1;

Event::Event()
{
#ifdef DEBUG
  cout << ">>> Event: constructeur par defaut <<<" << endl;
#endif
  code = 1;
  title = NULL; //d'abord NULL pour éviter les problèmes de mémoire avec setTitle. TOUS constructeurs char*.
  setTitle("---");
  timing = nullptr;
};

Event::Event(int a, const char* t){
#ifdef DEBUG
  cout <<">>>Event: constructeur d'initialisation<<<" << endl;
#endif
  setCode(a);
  title = NULL;
  setTitle(t);
  timing = nullptr;
};

Event::Event(const Event&a){
#ifdef DEBUG      
  cout <<">>>Event: constructeur de copie<<<" << endl;
#endif
  setCode(a.getCode());
  title = NULL;
  setTitle (a.getTitle());
  timing = nullptr;

  if(a.timing != nullptr){ //je peux accéder a timing de a prcq c'est la mm classe
    setTiming(a.getTiming());
  };
}; 

Event::~Event(){
#ifdef DEBUG
  cout << ">>>Event : destructeur (" << code <<")<<<" << endl;
#endif
  if (title) delete title;
  if (timing) delete timing;
};

//set et get. 
void Event::setCode(int a){
  if (a < 1) return;
  code = a;
};
void Event::setTitle(const char* t){
  if (t == NULL) return;
  if (title) delete title;
  title = new char[strlen(t)+1];
  strcpy(title, t);
};
void Event::setTiming(Timing Tmng){
  if (timing) delete timing;
  timing = new Timing(Tmng);
};

int Event::getCode() const {return code;};
const char* Event::getTitle() const {return title;};
Timing Event::getTiming() const {return *timing;};

//Méthode. Const ont leur importance et utilité. Ici = ne peut pas modifier les valeurs de la classe Event.
void Event::display() const{
  cout << "Event(" << code << ") : ";

  if (title == NULL){
    cout << "Pas de titre" << endl;
  }
  else{
    cout << title << endl;
  }

  if(timing == nullptr){
    cout << "Pas de timing" << endl;
  }
  else{
    timing->display();
  }
};