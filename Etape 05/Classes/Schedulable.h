#ifndef SCHEDULABLE //pq pas #pragma once ?
#define SCHEDULABLE

#include <stdlib.h>
#include <iostream>
using namespace std;	//j'ai lu sur un forum que pouvait causer des bugs? 

//IMPORTANT//
/*Ceci est une classe abstraite mère des classes Professor, Group
et Classroom. Deux fonctions virtuelles pures: toString et toTulpe
redéfinies (override) dans les classes respectives. VOIR THEORIE*/
//IMPORANT//

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
		~Schedulable();	//pourquoi le noter depuis le début si on utilise le destr de base ? pédagogie ?

		//Set et Get//
		int getId();
		void setId(int num);

		//Méthodes//
		virtual string toString() const;
		virtual string tuple() const;
};

#endif