#include "Time.h"

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
	Time::setHour(h);
	Time::setMinute(m);
};

Time::Time(int duree){
	#ifdef DEBUG
		cout << "---Time constructeur d'initialisation de durée" << endl;
	#endif
	if(duree > 0 && duree <= 1440){
		hour = duree/60;
		minute = duree%60;
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

void Time::setHour(const int h){hour = h;};

void Time::setMinute(const int m){minute = m;};

int Time::getHour() const {return hour;};

int Time::getMinute() const {return minute;};

//méthodes//

void Time::display() const{
	cout << hour << ":" << minute << endl;
};