#include "Schedulable.h"

	//Constructeurs//
	Schedulable::Schedulable(){
		#ifdef DEBUG
		cout << "---Schedulable constructeur par défaut" << endl;
		#endif
		setId(0);
	};

	Schedulable::Schedulable(int num){
		#ifdef DEBUG
		cout << "---Schedulable constructeur d'initialisation" << endl;
		#endif
		setId(num);
	};

	Schedulable::Schedulable(const Schedulable& a){
		#ifdef DEBUG
		cout << "---Schedulable constructeur de copie" << endl;
		#endif
		setId(a.getId());
	};

	//Destructeur//
	Schedulable::~Schedulable(){
		#ifdef DEBUG
		cout << "---Schedulable destructeur par défaut" << endl;
		#endif
	};

	//set et get//
	int Schedulable::getId() const{
		return id;
	};

	void Schedulable::setId(int num){
		id = num;
	};

	Schedulable& Schedulable::operator=(const Schedulable& schdl){
		setId(schdl.getId());
		return *this;
	};