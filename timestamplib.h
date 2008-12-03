///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//the Unix time stamp library 0.1.2  by c++ language--(timestamplib.h)
//improtamt:
//      1. there are two files in this library, they are timestamplib.h and timestamplib.cpp. this is the first file (timestamplib.h)
//      2. author can not ensure there are no mathematics error in this library.
//      3. if you have any problem, please do not hesitate to contact me on heston@liduan.com or www.liduan.com.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <ctime>
using namespace std ;

#if !defined TIMESTAMPLIB_H
#define TIMESTAMPLIB_H
class timestamp
{
	private:
		time_t getuts(struct tm tinfo);
	/* this is a private function. it is used for get unix time stamp 
	* for 1900 Jan 1st 00:00:00, but it is not The Unix epoch
	* (unix epoch is the time 00:00:00 UTC on January 1, 1970).
	*/
		
	public:
		void uts2time(time_t ust);
	/*this function can conversion unix time stamp to system time. 
	* and back the conversion result.
	*/
		long int time2uts(int yy, int mm, int dd, int hh, int mi, int ss);
	/*this function can conversion system time to unix time stamp. 
	* and back the conversion result.
	*/
};
#endif