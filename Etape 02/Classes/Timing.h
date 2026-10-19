#ifndef TIMING
#define TIMING

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Time.h"
using namespace std;

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
			Timing(const string d, const Time& strt, const Time& drt);
			Timing(const Timing& a);

			//---Destructeurs---//
			~Timing();

			//---set et get---//
			void setDay(const string d); //par référence + const
			void setStart(const Time& strt);
			void setDuration(const Time& drt);

			const string getDay () const;
			Time getStart() const;
			Time getDuration() const;
					
			//---méthodes---//
			void display();
	};
}

#endif