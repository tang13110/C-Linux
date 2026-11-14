#include "TimeException.h"

namespace planning {
	//---Variables statiques---//
		const int TimeException::INVALID_HOUR = 1, 
		TimeException::INVALID_MINUTE = 2, 
		TimeException::OVERFLOW = 3;

	//---Constructeurs---//
		TimeException::TimeException():Exception(){
			#ifdef DEBUG
			cout << "---TimeException constructeur par défaut" << endl;
			#endif
			code = 0;
		};

		TimeException::TimeException(const int c){
			#ifdef DEBUG
			cout << "---TimeException constructeur d'initialisation" << endl;
			#endif
			switch (c){
				case INVALID_HOUR:
					code = INVALID_HOUR;
					setMessage("Heure inférieure à zéro ou supérieure à 23 !");
					break;

				case INVALID_MINUTE:
					code = INVALID_MINUTE;
					setMessage("Minutes inférieures à zéro ou supérieures à 59 !");
					break;

				case OVERFLOW:
					code = OVERFLOW;
					setMessage("Résultat de ++ ou -- inférieur à zéro ou supérieur à 23h59 !");
					break;
			}
		};

		TimeException::TimeException(const TimeException& copie):Exception(copie){
			#ifdef DEBUG
			cout << "---TimeException constructeur par copie" << endl;
			#endif
			setCode(copie.code);
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
}