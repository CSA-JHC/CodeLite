#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int dollars, dimes, quarters, nickels, pennies;
	
	cout<<"How many dollars do you have? ";
	cin>>dollars;
	
	cout<<"How many dimes do you have? ";
	cin>>dimes;
	
	cout<<"How many quarters do you have? ";
	cin>>quarters;
	
	cout<<"How many nickels do you have? ";
	cin>>nickels;
	
	cout<<"How many pennies do you have? ";
	cin>>pennies;
	
	dimes*=10;
	quarters*=25;
	nickels*=5;
	
	total=dimes+quarters+nickels+pennies;
	
	remainder=total%100;
	total/=100;
	total+=dollars;
	
	cout<<"Your total amount is: $"<<total<<"."<<remainder;
	
	return 0;
}
