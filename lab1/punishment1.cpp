#include <iostream>
using namespace std;
int main()
{
int times;
cout << "Enter the number of lines for the punishment:";
cin >> times;
if (times > 0){
	for (int i=0;  i < times; i++) {
   		cout << "I will always use object oriented programming." <<endl;
}
}
else
{ 
cout << "You entered an incorrect value for thenumber of lines!"<< endl;
}
return 0;
}
