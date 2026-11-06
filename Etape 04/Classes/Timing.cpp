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
			cout << "---Timing constructeur par défaut" << endl;
		#endif
		setDay("---");
		setStart(Time(0,0));
		setDuration(Time(0));
	};

	Timing::Timing(const string d, const Time& strt, const Time& drt){
		#ifdef DEBUG
			cout << "---Timing constructeur par initialisation" << endl;
		#endif
		setDay(d);
		setStart(strt);
		setDuration(drt);
	};

	Timing::Timing(const Timing&a){
		#ifdef DEBUG
			cout << "---Timing constructeur de copie" << endl;
		#endif
		setStart(a.getStart());
		setDuration(a.getDuration());
		setDay(a.getDay());
	}

	//Destructeur

	Timing::~Timing(){
		#ifdef DEBUG
			cout << "---Timing destructeur par défaut" << endl;
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

	int Timing::compTiming(const Timing& tmg){
		if(tmg.day == day){
			if(start > tmg.start) return 1;
			if(start < tmg.start) return -1;
			//même heure de début
			if(duration > tmg.duration) return 1;
			if(duration < tmg.duration) return -1;
			//même durée
			return 0;
		}else{
			if(posDays(day) > posDays(tmg.day)) return 1;
			return -1;
		}
	};

	int Timing::posDays(const string& day){
		if(day == "Lundi"){return 1;};
		if(day == "Mardi"){return 2;};
		if(day == "Mercredi"){return 3;};
		if(day == "Jeudi"){return 4;};
		if(day == "Vendredi"){return 5;};
		if(day == "Samedi"){return 6;};
		if(day == "Dimanche"){return 7;};
		return -1;
	};

	int Timing::operator>(const Timing& tmg){
		return compTiming(tmg)==1;
	};

	int Timing::operator<(const Timing& tmg){
		return compTiming(tmg)==-1;
	};

	int Timing::operator==(const Timing& tmg){
		return compTiming(tmg)==0;
	};
}