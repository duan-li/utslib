///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//the Unix time stamp library 0.1.1  by c++ language--(timestamplib.h)
//improtamt:
//      1. there are two files in this library, they are timestamplib.h and timestamplib.cpp. this is the second file (timestamplib.cpp)
//      2. author can not ensure there are no mathematics error in this library.
//      3. if you have any problem, please do not hesitate to contact me on heston@liduan.com or www.liduan.com.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "timestamplib.h"
using namespace std ;


time_t timestamp::getuts(struct tm tinfo){
	time_t temp;
	temp=mktime(&tinfo);
	return temp;
	
}

void timestamp::uts2time(time_t ust){
	tm * timep;
	time_t time;
	
	string mon[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	string week[7] = {"Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"};
	
	
	time = ust;
	timep=gmtime(&time);
	
	
	cout << 1900+timep->tm_year << "-" << mon[timep->tm_mon] << "-" << timep->tm_mday << " (" << week[timep->tm_wday] << ") " << timep->tm_hour << ":" << timep->tm_min << ":" << timep->tm_sec << endl;
	/*
	*	timep->tm_year is number of year from 1900 to current time.
	*/
	
	
}

long int timestamp::time2uts(int yy, int mm, int dd, int hh, int mi, int ss){
		struct tm tinfo;
		int org_year=1900;
		
		
		
		
		tinfo.tm_year=yy-org_year;
		tinfo.tm_mon=mm-1;
		tinfo.tm_mday=dd;
		tinfo.tm_hour=hh;
		tinfo.tm_min=mi;
		tinfo.tm_sec=ss;
		
		long int uts = getuts(tinfo)+3600;
		return uts;
		//cout << getuts(tinfo)<< endl ;
}



