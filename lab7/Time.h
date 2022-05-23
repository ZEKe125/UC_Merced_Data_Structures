#include<iostream>

class Time {
	public:
		Time();				//Default constructor
		Time(int h, int m, int s);	//Parametized Constructor
		~Time();			// Destructor

		int getHours();			//accesors
		int getMinutes();
		int getSeconds();

		void setHours(int x );		//Mutators
		void setMinutes(int x );
		void setSeconds(int x );
	private :
		int hours, minutes, seconds;
};


