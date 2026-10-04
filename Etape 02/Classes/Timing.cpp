#include "Timing.h"

//Constructeurs

Timing::Timing(){
	#ifdef DEBUG
		cout << "---Time constructeur par défaut" << endl;
	#endif
	day = NULL;
	start.setHour(0);
	start.setMinute(0);
	duration.setHour(0);
	duration.setMinute(0);
};

Timing::~Timing(){
};