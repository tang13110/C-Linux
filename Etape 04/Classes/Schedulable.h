#ifndef SCHEDULABLE
#define SCHEDULABLE

#include <stdlib.h>
#include <iostream>
using namespace std;

class Schedulable
{
	protected:
		int id;

	public:

		//Constructeurs//
		Schedulable();
		Schedulable(int num);
		Schedulable(const Schedulable& a);

		//Destructeur//
		~Schedulable();

		//Set et Get//
		int getId() const;
		void setId(int num);
		Schedulable& operator=(const Schedulable& schdl);

		//Méthodes//
		virtual string toString() const = 0;
		virtual string tuple() const = 0;
};

#endif