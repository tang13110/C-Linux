#ifndef Timing
#define Timing

#include <stdlib.h>
#include <iostream>
#include <Time.h>
#include <string.h>
using namespace std;

class Timing
{
	private:
		char day;
		Time start, duration;
	public:

		//constructeurs
		Timing();
		Timing();

		//destructeurs
		~Timing();
};

#endif