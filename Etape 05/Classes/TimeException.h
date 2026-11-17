#ifndef TIMEEXCEPTION
#define TIMEEXCEPTION

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Exception.h"
using namespace std;

namespace planning {
	class TimeException : public Exception
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
			int getCode() const;
			TimeException& operator=(const TimeException& TmXcpt);
	};
}
#endif