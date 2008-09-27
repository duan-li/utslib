#include <iostream>
#include <iomanip>
#include <ctime>
// using 2 files of utslib//
#include "timestamplib.h"
#include "timestamplib.cpp"
using namespace std ;

int main(){
  class timestamp mytime;
  long t = 1228989721;
  mytime.uts2time(t);// output system time
  cout << endl << mytime.time2uts(2008,12,11,10,2,1);//output time stamp
}