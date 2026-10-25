#include "Professor.h"

	//Constructeurs//
	Professor::Professor():Schedulable(){
		#ifdef DEBUG
		cout << "---Professor constructeur par défaut" << endl;
		#endif
		setLastName("---");
		setFirstName("---");
	};

	Professor::Professor(int num, const string& lstName, const string& frstName):Schedulable(num){
		#ifdef DEBUG
		cout << "---Professor constructeur d'initialisation" << endl;
		#endif
		setLastName(lstName);
		setFirstName(frstName);
	};

	Professor::Professor(const Professor& a):Schedulable(a){
		#ifdef DEBUG
		cout << "---Professor constructeur de copie" << endl;
		#endif
		setLastName(a.getLastName());
		setFirstName(a.getFirstName());
	};

	//Desctructeur//
	Professor::~Professor(){
		#ifdef DEBUG
		cout << "---Professor destructeur par défaut" << endl;
		#endif
	};

	//Set et Get//
	void Professor::setLastName(const string& lstName){
		lastName = lstName;
	};

	void Professor::setFirstName(const string& frstName){
		firstName = frstName;
	};

	string Professor::getLastName() const{
		return lastName;
	};

	string Professor::getFirstName() const{
		return firstName;
	};

	//Méthodes//

	string Professor::toString() const{
		return lastName+" "+firstName;
	};
	string Professor::tuple() const{
		return to_string(id)+";"+lastName+";"+firstName;
	};

	Professor& Professor::operator=(const Professor& pf){
		id = pf.id;
		lastName = pf.lastName;
		firstName = pf.firstName;
		return (*this);
	};

	//Méthodes amies//
	ostream& operator<<(ostream& s, const Professor& pf){
		cout << pf.toString();
		return s;
	};
