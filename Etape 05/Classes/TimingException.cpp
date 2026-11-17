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
		setCode(0);
	};

	TimingException::TimingException(const int c){
		#ifdef DEBUG
		cout << "---TimeException constructeur d'initialisation" << endl;
		#endif
		switch (c){
			case INVALID_DAY:
				setCode(INVALID_DAY);
				setMessage("Mauvaise référence variable membre statique de Timing !");
				break;

			case NO_TIMING:
				setCode(NO_TIMING);
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
	int TimingException::getCode() const {return code;};
	TimingException& TimingException::operator=(const TimingException& TmngXcpt){
		setMessage(TmngXcpt.getMessage());
		setCode(TmngXcpt.getCode());
		return *this;
	};
}