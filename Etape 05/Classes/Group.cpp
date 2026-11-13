#include "Group.h"

	//Constructeurs//
		Group::Group():Schedulable(){
			#ifdef DEBUG
			cout << "---Group constructeur par défaut" << endl;
			#endif
			setName("---");
		};

		Group::Group(int num, const string& name):Schedulable(num){
			#ifdef DEBUG
			cout << "---Group constructeur d'initialisation" << endl;
			#endif
			setName(name);
		};

		Group::Group(const Group& a):Schedulable(a){
			#ifdef DEBUG
			cout << "---Group constructeur de copie" << endl;
			#endif
			setName(a.name);
		};

	//Destructeurs//
		Group::~Group(){
			#ifdef DEBUG
			cout << "---Group destructeur par défaut" << endl;
			#endif
		};

	//Set et Get//
		void Group::setName(const string& nm){
			name = nm;
		};

		string Group::getName() const{return name;};

	//Méthodes//
		string Group::toString() const{
			return name;
		};

		string Group::tuple() const{
			return to_string(id)+";"+name;
		};

		Group& Group::operator=(const Group& grp){
			id = grp.id;
			name = grp.name;
			return (*this);
		};

	//Méthodes amies//
	ostream& operator<<(ostream& s, const Group& grp){
		cout << grp.toString();
		return s;
	};