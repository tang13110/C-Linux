#ifndef TIME
#define TIME

#include <stdlib.h>
#include <iostream>
using namespace std;

class Time
{
	private:
		int hour;
		int minute;
	public:

		//constructeurs
		Time();
		Time(int h, int m);
		Time(int duree);
		Time(const Time&);
		
		//destructeur
		~Time();

		//set et get
		void setHour (const int h);
		void setMinute(const int m);
		int getHour() const;
		int getMinute() const;

		//méthodes

		void display() const;
};

#endif