#include "Timing.h"

namespace planning{
	//Variables statiques. Faire un par ligne
	const string Timing::MONDAY = "Lundi", 
	Timing::TUESDAY = "Mardi", 
	Timing::WEDNESDAY = "Mercredi", 
	Timing::THURSDAY = "Jeudi",
	Timing::FRIDAY = "Vendredi",
	Timing::SATURDAY = "Samedi",
	Timing::SUNDAY = "Dimanche";

	//Constructeurs

	Timing::Timing(){
		#ifdef DEBUG
			cout << "---Time constructeur par défaut" << endl;
		#endif
		setDay("---");
		setStart(Time(0,0));
		setDuration(Time(0));
	};

	Timing::Timing(const string d, const Time& strt, const Time& drt){
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

	//Destructeur

	Timing::~Timing(){
		#ifdef DEBUG
			cout << "---Time destructeur par défaut" << endl;
		#endif
	};

	//Set et Get
	void Timing::setDay(const string d){
		day = d;
	};

	void Timing::setStart(const Time& strt){
		start.setHour(strt.getHour());
		start.setMinute(strt.getMinute()); 
	};

	void Timing::setDuration(const Time& drt){
		duration.setHour(drt.getHour());
		duration.setMinute(drt.getMinute());
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
		cout << getDay() << " ";
		start.display();
		duration.display();
	};
}