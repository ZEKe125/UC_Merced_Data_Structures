//#include<assert.h>
#include<iostream>
//#include<stdio.h>
//#include<fstream>
#include<string.h>
#include<stdlib.h>
#include <iomanip> 

using namespace std;

struct Time {
int hr;
int min;
int sec;
};

bool getTimeFromUser(Time &time){

string StringTime;

getline(cin ,StringTime);
int size = strlen( StringTime.c_str());
int firstCollen;
int secondCollen;
string hr;
string min;
string sec;
string a;

if (size>=5 && size <=8){
	firstCollen = StringTime.find(":",0);
	secondCollen = StringTime.find(":", firstCollen+1);
	if (firstCollen==1|| firstCollen ==2){
		if (firstCollen==1){
			hr=StringTime.substr(0,1);
			time.hr= atoi(hr.c_str());
			//cout<< hr<< " strHR";
			if(secondCollen==3||secondCollen==4){
				if (secondCollen==3){
					min=StringTime.substr(2,1);
					time.min= atoi(min.c_str());
					//cout<< min<< " mins"<< endl;
					if (size==5){
						sec= StringTime.substr(4,1);
						time.sec= atoi(sec.c_str());
						//cout << sec<< " secs"<< endl;
					}else if (size==6){
						sec= StringTime.substr(4,2);
						time.sec= atoi(sec.c_str());
						//cout << sec<< " secs"<< endl;
					}else return false;
				}
				else if (secondCollen==4){
					min = StringTime.substr(2,2);
					time.min= atoi(min.c_str());
					//cout<< min<< " mins"<< endl;
					if (size==6){
						sec= StringTime.substr(5,1);
						time.sec= atoi(sec.c_str());
						//cout << sec<< " secs"<< endl;
					}else if (size==7){
						sec= StringTime.substr(5,2);
						time.sec= atoi(sec.c_str());
						//cout << sec<< " secs"<< endl;
					}else return false;
					
				}
			}else return false;
		}else{//fisrtCollen==2 in this case
				hr=StringTime.substr(0,2);
				time.hr= atoi(hr.c_str());
				//cout<< hr<< " strHR"<< endl;
				if(secondCollen== 4|| secondCollen==5){
					if (secondCollen==4){
						min=StringTime.substr(3,1);
						time.min= atoi(min.c_str());
						//cout<< min<< " mins"<< endl;
						if (size==6){
							sec= StringTime.substr(5,1);
							time.sec= atoi(sec.c_str());
							//cout << sec<< " secs"<< endl;
						}else if (size==7){
							sec= StringTime.substr(5,2);
							time.sec= atoi(sec.c_str());
							//cout << sec<< " secs"<< endl;
						}else return false;
					}
					else if (secondCollen==5){
						min = StringTime.substr(3,2);
						time.min= atoi(min.c_str());
						//cout<< min<< " mins"<< endl;
						if (size==7){
							sec= StringTime.substr(6,1);
							time.sec= atoi(sec.c_str());
							//cout << sec<< " secs"<< endl;
						}else if (size==8){
							sec= StringTime.substr(6,2);
							time.sec= atoi(sec.c_str());
							//cout << sec<< " secs"<< endl;
						}else return false;
					}else return false;
				}	
			}	
	}else return false;
		//cout << "HR "<< time.hr<< " M "<< time.min<< " S "<< time.sec<< endl;
		//cout<< StringTime<< endl;
		if (time.hr > 0 && time.hr <=24){
			if (time.min >= 0 && time.min < 60){
				if (time.sec >= 0 && time.sec < 60){
					return true;
				}else return false;
			}else return false;
		}else return false;
		
}
//cout<< StringTime << (size)<<"size"<<firstCollen<< " " << secondCollen<< " "<< a << endl;
return false;

}


void print24Hour(Time time){
	
	cout << setfill ('0') << setw (2);
	cout << time.hr;
	cout <<":";
	cout << setfill ('0') << setw (2);
	cout << time.min; 
	cout << ":";
	cout << setfill ('0') << setw (2);
	cout << time.sec;
	cout << ".";
	
}


int main(){

Time sTime;
Time eTime;
cout << "Enter the start time for the lecture(format is HH:MM:SS): ";
bool bsTime = getTimeFromUser(sTime);

if (bsTime== true){
	//cout<< bsTime<<"true";
}else {
	cout<< "Start Time Entered is Invalid!"; 
	exit(1);}

	
cout << "Enter the end time for the lecture(format is HH:MM:SS): ";
bool beTime = getTimeFromUser(eTime);
if (beTime== true){
	//cout<< beTime<< "true";
}else {
	cout<< "End Time Entered is Invalid!"; exit(1);
	}

if (bsTime== true && beTime== true){
	cout << "The Lecture starts at ";
	print24Hour(sTime);
	cout << " and ends at "; 
	print24Hour(eTime); 
	cout << endl;
}



}
