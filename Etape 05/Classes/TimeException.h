#ifndef TIMEEXCEPTION
#define TIMEEXCEPTION

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Exception.h"
using namespace std;

class TimeException : public Exception //mettre namespace planning pour éviter bug
{
	private:
		int code;
	public:

		//---Variables statiques---//
		static const int INVALID_HOUR, INVALID_MINUTE, OVERFLOW;

		//---Constructeurs---//
		TimeException();
		TimeException(int c);
		TimeException(const TimeException& copie);

		//---Destructeur---//
		~TimeException();

		//---Set et Get---//
		void setCode(int c);
		int getCode();

};

#endif