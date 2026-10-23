#include "Professor.h"

	//Constructeurs//
	Professor::Professor():Schedulable(){
		#ifdef DEBUG
		cout << "---Professor constructeur par défaut" << endl;
		#endif
		setLastName("---");
		setFirstName("---");
	};

	Professor::Professor(int num, string lstName, string frstName):Schedulable(num){
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
	void Professor::setLastName(string lstName){
		lastName = lstName;
	};

	void Professor::setFirstName(string frstName){
		firstName = frstName;
	};

	const string Professor::getLastName() const{
		return lastName;
	};

	const string Professor::getFirstName() const{
		return firstName;
	};

	//Méthodes//

	const string Professor::toString() const{
		return lastName+" "+firstName;
	};
	const string Professor::toTulpe() const{
		return id+";"+lastName+";"+firstName;
	};

	//Méthodes amies//
	ostream& operator<<(ostream& s, const Professor& pf){
		cout << pf.toString();
		return s;
	};
