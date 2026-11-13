#include"Exception.h"

		//---Constructeurs---// //A FINIR

		Exception::Exception(){};
		Exception::Exception(string mess) {message = mess;};
		Exception::Exception(const Exception& copie){};

		//méthode get pour afficher le message contenu
		string Exception::getMessage() const {return message;};