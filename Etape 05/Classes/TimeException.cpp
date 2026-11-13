#include "TimeException.h"

	//---Variables statiques---//
		const int TimeException::INVALID_HOUR = 1, 
		TimeException::INVALID_MINUTE = 2, 
		TimeException::OVERFLOW = 3;

	//---Constructeurs---//
		TimeException::TimeException(){
			#ifdef DEBUG
			cout << "---TimeException constructeur par défaut" << endl;
			#endif
		};

		TimeException::TimeException(const int c){
			#ifdef DEBUG
			cout << "---TimeException constructeur d'initialisation" << endl;
			#endif
			if(INVALID_HOUR){ //switchcase
				code = INVALID_HOUR;
				message = "Heure inférieure à zéro ou supérieure à 23 !";
			};
			/*if(INVALID_MINUTE){};
			if(OVERFLOW){};*/
		};

		TimeException::TimeException(const TimeException& copie){
			#ifdef DEBUG
			cout << "---TimeException constructeur par copie" << endl;
			#endif
			//TO DO au cas où...
		};

	//---Destructeur---//
		TimeException::~TimeException(){
			#ifdef DEBUG
			cout << "---Time destructeur par défaut" << endl;
			#endif
		};

	//---Set et Get---//
		void TimeException::setCode(int c){code = c;};
		int TimeException::getCode(){return code;};
