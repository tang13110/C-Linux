#include"Exception.h"

		//---Constructeurs---// //

		Exception::Exception(){
			#ifdef DEBUG
			cout << "---Exception constructeur par défaut" << endl;
			#endif
			message = "---";
		};

		Exception::Exception(string mess){
			#ifdef DEBUG
			cout << "---Exception constructeur d'initialisation" << endl;
			#endif
			setMessage(mess);
		};

		Exception::Exception(const Exception& copie){
			#ifdef DEBUG
			cout << "---Exception constructeur de copie" << endl;
			#endif
			setMessage(copie.message);
		};

		//---Destructeur---//
		Exception::~Exception(){
			#ifdef DEBUG
			cout << "---Exception destructeur de base" << endl;
			#endif
		};

		//---Set et Get---//
		string Exception::getMessage() const {
			return message;
		};

		void Exception::setMessage(string msg){
			message = msg;
		};