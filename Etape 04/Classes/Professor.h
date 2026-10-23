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
		Professor(int num, string lstName, string frstName); //REF ET CONST !!! => partout
		Professor(const Professor& a);

	//Desctructeur//
		~Professor();

	//Set et Get//
		void setLastName(string lstName);
		void setFirstName(string frstName);
		const string getLastName() const;
		const string getFirstName() const;

	//Méthodes//
		const string toString() const;
		const string toTulpe() const;
};

ostream& operator<<(ostream& s, const Professor& pf);


#endif