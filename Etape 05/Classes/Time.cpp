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
		durationToHour(duree);
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
		else{
			throw TimeException(TimeException::INVALID_HOUR);
		}
	};
	
	void Time::setMinute(int m){
		if(m < 60 && m >= 0){
			minute = m;
		}
		else{
			throw TimeException(TimeException::INVALID_MINUTE);
		}
	}; 

	int Time::getHour() const {return hour;};

	int Time::getMinute() const {return minute;};

	Time& Time::operator=(const Time&tm){
		setHour(tm.hour);
		setMinute(tm.minute);
		return(*this);
	};

	Time Time::operator+(int number) const {
		if(number < 0){
			Time copie(*this);
			return copie - (number * -1);
		}
		else{
			int total = minute + number + (hour * 60);
			return total;
		}
	};

	Time Time::operator+(const Time& tm) const {
		Time copie(*this);
		int totalMinutes = tm.hour * 60 + tm.minute;
		copie = copie + totalMinutes;
		return copie;
	};

	Time Time::operator-(int number) const {
		
		if(number < 0){
			Time copie(*this);
			return copie + (number * -1);
		}
		else{
				int res = minute + (hour * 60);
				res = res - number;
				return res;
			}
	};

	Time Time::operator-(const Time& tm) const {
		Time copie(*this);
		int totalMinutes = tm.hour * 60 + tm.minute;
		copie = copie - totalMinutes;
		return copie;
	};

	int Time::operator<(const Time& tm) const {
		return compTime(tm)==-1;
	};

	int Time::operator>(const Time& tm) const {
		return compTime(tm)==1;
	};

	int Time::operator==(const Time& tm) const {
		return compTime(tm)==0;
	};

	Time Time::operator++(){
		(*this) = (*this) + 30;
		if((*this) > Time(23, 59)){
			throw TimeException(TimeException::OVERFLOW);
		}
		return (*this);
	};

	Time Time::operator++(int pourDiff){
		Time copie(*this);
		(*this) = (*this) + 30;
		if(copie > Time(23, 59)){
			throw TimeException(TimeException::OVERFLOW);
		}
		return copie;
	};

	Time Time::operator--(){
		(*this) = (*this) - 30;
		if((*this) < Time(0,0)){
			throw TimeException(TimeException::OVERFLOW);
		}
		return (*this);
	};

	Time Time::operator--(int pourDiff){
		Time copie(*this);
		(*this) = (*this) - 30;
		if(copie < Time(0,0)){
			throw TimeException(TimeException::OVERFLOW);
		}
		return copie;
	};

	//méthodes//

	void Time::display() const{
		if(minute < 10){
			cout << hour << "h0" << minute << " ";
		}
		else{
			cout << hour << "h" << minute << " ";
		}
	};

	int Time::compTime(const Time& tm) const {
		if(hour < tm.hour) return -1;
		if(hour > tm.hour) return 1;
		//même heure
		if(minute < tm.minute) return -1;
		if(minute > tm.minute) return 1;
		//même minute donc mm heure
		return 0;
	};

	void Time::durationToHour(int duree){
		setHour(duree/60);
		setMinute(duree%60);
	};

	//Méthodes AMIES//

	Time operator+(int number, Time& tm){
		return tm + number;
	};

	Time operator-(int number, Time& tm){
		Time forNumber(number);	
		return forNumber - tm;
	};

	ostream& operator<<(ostream& s, const Time& tm){
		tm.display();
		return s;
	};

	istream& operator>>(istream& s, Time& tm){
		int h, m;
		char car;
		cout << "Heure (00h00) : ";
		s>>h;
		s>>car;
		s>>m;

		tm.hour = h;
		tm.minute = m;
		return s;
	};

}