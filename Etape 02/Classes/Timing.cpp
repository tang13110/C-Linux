#include "Timing.h"

//Variables statiques
const string Timing::MONDAY = "Lundi", Timing::TUESDAY = "Mardi", Timing::WEDNESDAY = "Mercredi", Timing::THURSDAY = "Jeudi",Timing::FRIDAY = "Vendredi",Timing::SATURDAY = "Samedi",Timing::SUNDAY = "Dimanche";

//Constructeurs

Timing::Timing(){
	#ifdef DEBUG
		cout << "---Time constructeur par défaut" << endl;
	#endif
	setDay("---");
	start.setHour(0);
	start.setMinute(0);
	duration.setHour(0);
	duration.setMinute(0);
};

Timing::Timing(const string d, Time strt, Time drt){
	#ifdef DEBUG
		cout << "---Time constructeur par initialisation" << endl;
	#endif
	setDay(d);
	setStart(strt);
	setDuration(drt);
};

Timing::Timing(const Timing&a){
	#ifdef DEBUG
		cout << "---Time constructeur de copie" << endl;
	#endif
	setStart(a.getStart());
	setDuration(a.getDuration());
	setDay(a.getDay());
}

//Destructeurs

Timing::~Timing(){
	#ifdef DEBUG
		cout << "---Time destructeur par défaut" << endl;
	#endif
};

//Set et Get
void Timing::setDay(const string d){
	day = d;
};

void Timing::setStart(Time strt){
	start = strt; 
};

void Timing::setDuration(Time drt){
	duration = drt;
};

const string Timing::getDay() const {return day;};

Time Timing::getStart() const {
	return start;
};

Time Timing::getDuration() const {
	return duration;
}

//Méthodes

void Timing::display() {
	cout << getDay() << endl;
	start.display();
	duration.display();
};