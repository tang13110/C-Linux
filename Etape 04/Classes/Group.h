#ifndef GROUP
#define GROUP
#include <stdio.h>
#include <iostream>
#include "Schedulable.h"
using namespace std;

class Group : public Schedulable
{
	friend ostream& operator<<(ostream& s, const Group& grp);

	private:
		string name;

	public:
	//Constructeurs//
		Group();
		Group(int num, const string& name);
		Group(const Group& a);

	//Destructeurs//
		~Group();

	//Set et Get//
		void setName(const string& nm);
		string getName() const;

	//Méthodes//
		string toString() const;
		string tuple() const;
		Group& operator=(const Group& grp); //voir professeur.h
};

ostream& operator<<(ostream& s, const Group& grp);

#endif