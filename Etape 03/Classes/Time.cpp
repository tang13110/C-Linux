#include "Time.h"

namespace planning {
	//---Constructeurs---//

	Time::Time(){
		#ifdef DEBUG
			cout << "---Time constructeur par défaut" << endl;
		#endif
		hour = 0;
		minute = 0;
	};

	Time::Time(int h, int m){
		#ifdef DEBUG
			cout << "---Time constructeur d'initialisation" << endl;
		#endif
		setHour(h);
		setMinute(m);
	};

	Time::Time(int duree){
		#ifdef DEBUG
			cout << "---Time constructeur d'initialisation de durée" << endl;
		#endif
		if(duree > 0 && duree <= 1440){
			setHour(duree/60);
			setMinute(duree%60);
		}
		else{
			hour = 0;
			minute = 0;
		}
	};

	Time::Time(const Time& copie){
		#ifdef DEBUG
			cout << "---Time constructeur de copie" << endl;
		#endif
		setHour(copie.getHour());
		setMinute(copie.getMinute());
	}

	//---Destructeurs---//

	Time::~Time(){
		#ifdef DEBUG
			cout << "---Time destructeur par défaut" << endl;
		#endif
	};

	//---Set et Get---//

	void Time::setHour(int h){
		if(h < 24 && h >= 0){
			hour = h;
		}
	};
	
	void Time::setMinute(int m){
		if(m < 60 && m >= 0){
			minute = m;
		}
	}; 

	int Time::getHour() const {return hour;};

	int Time::getMinute() const {return minute;};

	//méthodes//

	void Time::display() const{
		if(minute < 10){
			cout << hour << ":0" << minute << " ";
		}
		else{
			cout << hour << ":" << minute << " ";
		}
	};

	Time& Time::operator=(const Time&tm){
		hour = tm.hour;
		minute = tm.minute;

		return(*this);
	};

	Time Time::operator+(int number){
		Time copie(*this);

		if(number < 0){
			return copie - (number * -1);
		}
		else{
			if((copie.minute + number) > 59){
				number = copie.minute + number;
				copie.hour = copie.hour + number/60;
				copie.minute = number - (number/60) * 60;
			}else{
				copie.minute = copie.minute + number;
			}
		}
		return copie;
	};

	Time Time::operator+(const Time& tm){//pq pas amie ?
		Time copie(*this);
		int totalMinutes = tm.hour * 60 + tm.minute;
		copie = copie + totalMinutes;
		return copie;
	};

	Time Time::operator-(int number){
		Time copie(*this);
		if(number < 0){
			return copie + (number * -1);
		}
		else{
			if(number > 59){
					copie.hour -= number/60;
					if(copie.hour < 0){
						copie.hour = 24 + copie.hour;
					}
					number = number - number/60 * 60;
				}
			if((copie.minute - number) < 0){
				copie.hour -= 1;
				copie.minute = 60 + (copie.minute - number);
			}else{
				copie.minute = copie.minute - number;
			}
		}
		return copie;
	};

	Time Time::operator-(const Time& tm){//pq pas amie ?
		Time copie(*this);
		int totalMinutes = tm.hour * 60 + tm.minute;
		copie = copie - totalMinutes;
		return copie;
	};

	//Méthodes AMIES//

	Time operator+(int number, Time& tm){
		return tm + number;
	};

	Time operator-(int number, Time& tm){
		return tm - number;
	};
}