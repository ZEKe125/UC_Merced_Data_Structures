#include <iostream>
using namespace std;
int main()
{
int times;
int typo;
cout << "Enter the number of lines for the punishment:";
cin >> times;
if (times > 0){
	cout <<  "Enter the line for which we want to make a typo:";
	cin >> typo;
	if (typo <= times && typo >0 )
		for (int i=0;  i < times; i++){
			if(i == typo-1 )
        	       		{cout << "I ill aways use bject orsgiented prfsdogramming."<<endl;}
				
			else
				 { cout << "I will always use object oriented programming."<<endl ;}
		}
		
	else
		{cout << "You entered an incorrect value for the line typo! "<<endl;}
	

}else
{cout << "You entered an incorrect value for thenumber of lines!"<< endl;}

return 0;}



