#include "Time.h"

Time :: Time () {
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time :: Time (int h, int m, int s ) {
	hours = h;
	minutes = m;
	seconds = s;
}

Time :: ~Time (){
}

int Time :: getHours() { return hours; }
int Time :: getMinutes() { return minutes ; }
int Time :: getSeconds() { return seconds; }

void Time :: setHours(int x) { hours = x; }
void Time :: setMinutes(int x) { minutes = x; }
void Time :: setSeconds(int x) { seconds = x; }


