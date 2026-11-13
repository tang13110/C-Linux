#include "Classroom.h"

	//Constructeurs//
		Classroom::Classroom():Schedulable(){
			#ifdef DEBUG
			cout << "---Classroom constructeur par défaut" << endl;
			#endif
			setSeatingCapacity(0);
			setName("---");
		};

		Classroom::Classroom(int num, const string& name, int seat):Schedulable(num){
			#ifdef DEBUG
			cout << "---Classroom constructeur d'initialisation" << endl;
			#endif
			setSeatingCapacity(seat);
			setName(name);
		};

		Classroom::Classroom(const Classroom& a):Schedulable(a){
			#ifdef DEBUG
			cout << "---Classroom constructeur de copie" << endl;
			#endif
			setSeatingCapacity(a.seatingCapacity);
			setName(a.name);
		};

	//Destructeurs//
		Classroom::~Classroom(){
			#ifdef DEBUG
			cout << "---Classroom destructeur par défaut" << endl;
			#endif
		};

	//Set et Get//
		void Classroom::setName(const string& nm){
			name = nm;
		};

		void Classroom::setSeatingCapacity(int seat){
			seatingCapacity = seat;
		};

		string Classroom::getName() const{return name;};

		int Classroom::getSeatingCapacity(){
			return seatingCapacity;
		};

	//Méthodes//
		string Classroom::toString() const{
			return name+"("+to_string(seatingCapacity)+")";
		};

		string Classroom::tuple() const{
			return to_string(id)+";"+name+"("+to_string(seatingCapacity)+")";
		};

		Classroom& Classroom::operator=(const Classroom& clsrm){
			id = clsrm.id;
			name = clsrm.name;
			seatingCapacity = clsrm.seatingCapacity;
			return (*this);
		};

	//Méthodes amies//
	ostream& operator<<(ostream& s, const Classroom& clsrm){
		cout << clsrm.toString();
		return s;
	};