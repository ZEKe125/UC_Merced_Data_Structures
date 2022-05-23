#include<assert.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include <iomanip> 

using namespace std;

struct Time {
int hr;
int min;
int sec;
};

struct Course {
	string name;
	int credits;
	bool majorRequirement;
	double avgGrade;
	string days;
	Time startTime;
	Time endTime;
};

bool getTimeFromUser(Time &time, string StringTime){

//cout << StringTime << endl;
StringTime = StringTime.substr(0,8);
//getline(inFile,StringTime);
int size = strlen( StringTime.c_str());
//cout << size << "size"<< endl;
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


void print12Hour(Time time){
	int hr12 = time.hr;
	
	string TIME = "am";
	//cout << time.hr<< "hr";
	if (time.hr > 12){
		hr12 = time.hr - 12;
		TIME = "pm";
	}
	//cout << setfill ('0') << setw (2);
	cout << hr12;
	cout <<":";
	cout << setfill ('0') << setw (2);
	cout << time.min; 
	cout << ":";
	cout << setfill ('0') << setw (2);
	cout << time.sec;
	cout << TIME;
	
}



int main(){
string line;
//cout<< "main";
int numOfCourses;
	ifstream inFile ("in.txt");
	if (inFile.is_open()){
		//cout << "file is open";
		getline (inFile,line);
		numOfCourses = atoi(line.c_str());
		//inFile.close();
		Course*Classes = new Course[numOfCourses]; 
		//cout << count;
		//string* data = new string[numOfCourses*7];
		//inFile.open("in.txt");
		//ofstream outFile ("words_out.txt");
		cout << "-----------------------------------"<< endl;
		cout << "         SCHEDULE OF STUDENT "<< endl;
		cout << "-----------------------------------"<< endl;
		
		for (int i = 0; i < numOfCourses;i++){
			//cout << endl;
			getline(inFile, line);
			Classes[i].name = line;
			getline(inFile, line);
			Classes[i].credits = atoi(line.c_str());
			getline(inFile, line);
			Classes[i].majorRequirement = (bool)atoi(line.c_str());
			//cout << Classes[i].majorRequirement;
			getline(inFile, line);
			Classes[i].avgGrade = (double)atof(line.c_str());
			getline(inFile, line);
			Classes[i].days = line;
			getline(inFile, line);
			bool STime = getTimeFromUser(Classes[i].startTime, line);
			//cout << STime << endl;
			getline(inFile, line);
			bool ETime = getTimeFromUser(Classes[i].endTime, line);
			//cout << ETime << endl;
			
			//cout << (line)<< endl;
		}
		inFile.close();
		for (int i = 0; i < numOfCourses;i++){
			
			cout << "COURSE "<< (i+1) <<": "<< Classes[i].name << endl;
			
			if(Classes[i].majorRequirement== true){
				cout << "Note: this course is a major requirement!"<< endl;	
			}else if (Classes[i].majorRequirement== false){
				cout << "Note: this course is not a major requirement!"<< endl;
			}
			
			cout << "Number of Credits: " << Classes[i].credits << endl;
			cout << "Days of Lectures: " <<  Classes[i].days << endl;
			cout << "Lecture Time: ";
			print12Hour(Classes[i].startTime);
			cout << " - ";
			print12Hour(Classes[i].endTime);
			cout << endl;
			cout << "Stat: on average students get "<< Classes[i].avgGrade << "% in this course."<< endl;
			cout << "-----------------------------------"<< endl;
			
		}	
		//print12Hour(Classes[0].startTime);
	}

	else cout << "Unable to open file"; 




}