#ifndef CLASSROOM
#define CLASSROOM
#include <stdio.h>
#include <iostream>
#include "Schedulable.h"
using namespace std;

class Classroom : public Schedulable
{
	friend ostream& operator<<(ostream& s, const Classroom& clsrm);

	private:
		int seatingCapacity;
		string name;

	public:
	//Constructeurs//
		Classroom();
		Classroom(int num, const string& name, int seat);
		Classroom(const Classroom& a);

	//Destructeurs//
		~Classroom();

	//Set et Get//
		void setName(const string& nm);
		void setSeatingCapacity(int seat);
		string getName() const;
		int getSeatingCapacity();

	//Méthodes//
		string toString() const;
		string tuple() const;
		Classroom& operator=(const Classroom& clsrm); //voir professeur.h
};

ostream& operator<<(ostream& s, const Classroom& clsrm);

#endif