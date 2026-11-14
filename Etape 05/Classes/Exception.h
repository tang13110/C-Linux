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

		//---Constructeur---//
			Exception();
			Exception(string mess);
			Exception(const Exception& copie);

		//---Destructeur---//
			~Exception();

		//--Set et Get---//
			string getMessage() const;
			void setMessage(string msg);
};

#endif