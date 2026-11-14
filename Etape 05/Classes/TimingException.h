#ifndef TIMINGEXCEPTION
#define TIMINGEXCEPTION

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Exception.h"
using namespace std;

namespace planning {
	class TimingException : public Exception
	{
		private:
			int code;
		public:

			//---Variables statiques---//
			static const int INVALID_DAY, NO_TIMING;

			//---Constructeurs---//
			TimingException();
			TimingException(int c);
			TimingException(const TimingException& copie);

			//---Destructeur---//
			~TimingException();

			//---Set et Get---//
			void setCode(int c);
			int getCode();

	};
}
#endif