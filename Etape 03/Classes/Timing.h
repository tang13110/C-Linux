#ifndef TIMING
#define TIMING

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Time.h"
using namespace std;
using namespace planning;

namespace planning {
	class Timing
	{
		private:
			string day;
			Time start, duration;		
		public:

			//---Variables constantes---//
			static const string MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY;
			
			//---Constructeurs---//
			Timing();
			Timing(const string, Time, Time);
			Timing(const Timing&);

			//---Destructeurs---//
			~Timing();

			//---set et get---//
			void setDay(const string);
			void setStart(Time);
			void setDuration(Time);

			const string getDay () const;
			Time getStart() const;
			Time getDuration() const;
					
			//---méthodes---//
			void display();
	};
}

#endif