#ifndef TIME
#define TIME

#include <stdlib.h>
#include <iostream>
using namespace std;

namespace planning {
	class Time
	{
		friend Time operator+(int number, Time& tm);
		friend Time operator-(int number, Time& tm);

		private:
			int hour;
			int minute;

			int compTime(const Time& tm);
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

			//---méthodes---//
			void display() const;
			Time& operator=(const Time& tm);
			Time operator+(int number);
			Time operator+(const Time& tm);
			Time operator-(int number);
			Time operator-(const Time& tm);
			int operator<(const Time& tm);
			int operator>(const Time& tm);
			int operator==(const Time& tm);
	};
	Time operator+(int number, Time& tm);
	Time operator-(int number, Time& tm);
}

#endif