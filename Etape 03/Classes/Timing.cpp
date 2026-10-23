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
			string jours[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
			string joursComp[2] = {day, tmg.day};
			int i = 0, posDeux[2];
			while (i < 2){
				int j = 0;
				while(j < 7){
					if(jours[j] == joursComp[i]){
						posDeux[i] = j;
						j == 7;
					}
					j++;
				}
				i++;
			}
			if(posDeux[0] > posDeux[1]) return 1;
			return -1;
		}
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