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

	Time::Time(const Time&a){
		#ifdef DEBUG
			cout << "---Time constructeur de copie" << endl;
		#endif
		setHour(a.getHour());
		setMinute(a.getMinute());
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
}