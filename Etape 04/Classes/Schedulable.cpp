#include "Schedulable.h"

		//Constructeurs//
		Schedulable::Schedulable(){
			#ifdef DEBUG
			cout << "---Schedulable constructeur par défaut" << endl;
			#endif
			id = 0;
		};

		Schedulable::Schedulable(int num){
			#ifdef DEBUG
			cout << "---Schedulable constructeur d'initialisation" << endl;
			#endif
			id = num;
		};

		Schedulable::Schedulable(const Schedulable& a){
			#ifdef DEBUG
			cout << "---Schedulable constructeur de copie" << endl;
			#endif
			id = a.id;
		};

		//Destructeur//

		Schedulable::~Schedulable(){
			#ifdef DEBUG
			cout << "---Schedulable destructeur par défaut" << endl;
			#endif
		};

		//set et get//

		int Schedulable::getId(){
			return id;
		};

		void Schedulable::setId(int num){
			id = num;
		};

		//Méthodes//