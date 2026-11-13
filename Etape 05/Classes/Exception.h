#ifndef EXCEPTION
#define EXCEPTION

#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

class Exception{
	
	protected:
		string message;
	public:
		//constructeur de copie. Utiliser dans les classes héritées
		Exception();
		Exception(string mess);
		Exception(const Exception& copie);
		//méthode get pour afficher le message contenu
		string getMessage() const;
};

#endif