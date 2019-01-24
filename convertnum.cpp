#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string number; //define number
	
	cout<<"Please type a number (in lowercase letters) between 0-4: "; //ask user for a number
	cin>>number;
	
	//compare inputs to the options they are given
	if (number=="zero")
	{
		cout<<"0 \n";
	}
	
	else if (number=="one")
	{
		cout<<"1 \n";
	}
	
	else if (number=="two")
	{
		cout<<"2 \n";
		
	}
	else if (number=="three")
	{
		cout<<"3 \n";
	}
	
	else if (number=="four")
	{
		cout<<"4 \n";
	}
	
	//if it is not an option given, output that it wasn't a number
	else
	{
		cout<<"That was not a number... \n";
	}
	
	return 0;
}
