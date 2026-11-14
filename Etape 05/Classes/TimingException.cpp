#include "TimingException.h"

namespace planning {
	//---Variables statiques---//
		const int TimingException::INVALID_DAY = 1, 
		TimingException::NO_TIMING = 2;

	//---Constructeurs---//
		TimingException::TimingException():Exception(){
			#ifdef DEBUG
			cout << "---TimeException constructeur par défaut" << endl;
			#endif
			code = 0;
		};

		TimingException::TimingException(const int c){
			#ifdef DEBUG
			cout << "---TimeException constructeur d'initialisation" << endl;
			#endif
			switch (c){
				case INVALID_DAY:
					code = INVALID_DAY;
					setMessage("Mauvaise référence variable membre statique de Timing !");
					break;

				case NO_TIMING:
					code = NO_TIMING;
					setMessage("Pas planifié !");
					break;
			}
		};

		TimingException::TimingException(const TimingException& copie):Exception(copie){
			#ifdef DEBUG
			cout << "---TimeException constructeur par copie" << endl;
			#endif
			setCode(copie.code);
		};

	//---Destructeur---//
		TimingException::~TimingException(){
			#ifdef DEBUG
			cout << "---Time destructeur par défaut" << endl;
			#endif
		};

	//---Set et Get---//
		void TimingException::setCode(int c){code = c;};
		int TimingException::getCode(){return code;};
}