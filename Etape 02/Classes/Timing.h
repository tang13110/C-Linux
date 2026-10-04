#ifndef TIMING
#define TIMING

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Time.h"
using namespace std;

class Timing
{
	private:
		char* day;
		Time start, duration;
	public:
		//constructeurs
		Timing();

		//destructeurs
		~Timing();

		//set et get
		void setDay(char* t);
		void setStart(Time s);
		void setDuration(Time d);
		const char* getDay();
		void getStart();
		void getDuration();

		//méthodes
		void display();
};

#endif