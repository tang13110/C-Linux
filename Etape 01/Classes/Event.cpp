#include "Event.h"


Event::Event()
{
#ifdef DEBUG
  cout << ">>> Event: constructeur par defaut <<<" << endl;
#endif
  code = 1;
  title = NULL; //d'abord NULL pour éviter les problèmes de mémoire avec setTitle. TOUS constructeurs char*.
  setTitle("---");
};

Event::Event(int a, const char* t){
#ifdef DEBUG
  cout <<">>>Event: constructeur d'initialisation<<<" << endl;
#endif
  setCode(a);
  title = NULL;
  setTitle(t);
};

Event::Event(const Event&a){
#ifdef DEBUG      
  cout <<">>>Event: constructeur de copie<<<" << endl;
#endif
  setCode(a.getCode());
  title = NULL;
  setTitle (a.getTitle());
}; 

Event::~Event(){
#ifdef DEBUG
  cout << ">>>Event : destructeur (" << code <<")<<<" << endl;
#endif
  if (title) delete title;
};

//set et get. Set = méthodes qui permettent de donner des valeurs au variables privées.
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

int Event::getCode() const {return code;};
const char* Event::getTitle() const {return title;};

//Méthode. Const ont leur importance et utilité. Ici = ne peut pas modifier les valeurs de la classe Event.
void Event::display() const{
  cout << "Event(" << code << ") : ";

  if (title == NULL){
    cout << "Pas de titre" << endl;
  }
  else{
    cout << title  << endl;
  }
};