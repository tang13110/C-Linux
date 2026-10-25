#ifndef PROFESSOR 
#define PROFESSOR
#include <stdio.h>
#include <iostream>
#include "Schedulable.h"
using namespace std;

class Professor : public Schedulable
{
	friend ostream& operator<<(ostream& s, const Professor& pf);

	private:
		string lastName, firstName;

	public:
	//Constructeurs//
		Professor();
		Professor(int num, const string& lstName, const string& frstName);  
		Professor(const Professor& a);

	//Desctructeur//
		~Professor();

	//Set et Get//
		void setLastName(const string& lstName);
		void setFirstName(const string& frstName);
		string getLastName() const;
		string getFirstName() const;

	//Méthodes//
		string toString() const;
		string tuple() const;
		Professor& operator=(const Professor& pf);
};

ostream& operator<<(ostream& s, const Professor& pf);


#endif