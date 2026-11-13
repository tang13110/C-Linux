#ifndef TIME
#define TIME

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "TimeException.h"
using namespace std;

namespace planning {
	class Time
	{
		friend Time operator+(int number, Time& tm);
		friend Time operator-(int number, Time& tm);
		friend ostream& operator<<(ostream& s, const Time& tm);
		friend istream& operator>>(istream& s, Time& tm);

		private:
			int hour;
			int minute;

			int compTime(const Time& tm) const;
			void durationToHour(int duree);
		public:

			//---Constructeurs---//
			Time();
			Time(int h, int m);
			Time(int duree);
			Time(const Time& copie);
			
			//---Destructeur---//
			~Time();

			//---set et get---//
			void setHour (int h);
			void setMinute(int m);
			int getHour() const;
			int getMinute() const;
			Time& operator=(const Time& tm);
			Time operator+(int number) const;
			Time operator+(const Time& tm) const;
			Time operator-(int number) const;
			Time operator-(const Time& tm) const;
			int operator<(const Time& tm) const;
			int operator>(const Time& tm) const;
			int operator==(const Time& tm) const;
			Time operator++();
			Time operator++(int pourDiff);
			Time operator--();
			Time operator--(int pourDiff);

			//---méthodes---//
			void display() const;
	};
}

#endif