#include <iostream>
#include <cmath>
using namespace std;

//JESSICA CHIU

int main()
{
	//define variables
	int halfdollars, dollars, dimes, quarters, nickels, pennies, total;
	float remainder;
	string halfbills, bills, coin1, coin2, coin3, coin4;
	
	//ask user how much of each coin they have to determine total amount of money
	cout<<"How many dollars do you have? ";
	cin>>dollars;
	
	cout<<"How many half dollars do you have? ";
	cin>>halfdollars;
	
	cout<<"How many dimes do you have? ";
	cin>>dimes;
	
	cout<<"How many quarters do you have? ";
	cin>>quarters;
	
	cout<<"How many nickels do you have? ";
	cin>>nickels;
	
	cout<<"How many pennies do you have? ";
	cin>>pennies;
	
	//check to see how many of each the user has to calculate the amount of money	
	if (dollars==1)
	{
		bills="dollar";
	}
	else
	{
		bills="dollars";
	}
	
	if (halfdollars==1)
	{
		halfbills="half dollar";
	}
	else
	{
		halfbills="half dollars";
	}
	
	if (dimes==1)
	{
		coin1="dime";
	}
	else
	{
		coin1="dimes";
	}
	
	if (quarters==1)
	{
		coin2="quarter";
	}
	else
	{
		coin2="quarters";
	}
	
	if (nickels==1)
	{
		coin3="nickel";
	}
	else
	{
		coin3="nickels";
	}
	
	if (pennies==1)
	{
		coin4="penny";
	}
	else
	{
		coin4="pennies";
	}
	
	//print how much of each the user has
	cout<<"You have "<<dollars<<" "<<bills<<"\n";
	cout<<"You have "<<halfdollars<<" "<<halfbills<<"\n";
	cout<<"You have "<<dimes<<" "<<coin1<<"\n";
	cout<<"You have "<<quarters<<" "<<coin2<<"\n";
	cout<<"You have "<<nickels<<" "<<coin3<<"\n";
	cout<<"You have "<<pennies<<" "<<coin4<<"\n";
	
	//multiply by appropriate amount to determine total amount of money
	halfdollars*=50;
	dimes*=10;
	quarters*=25;
	nickels*=5;
	
	//find the total amount
	total=halfdollars+dimes+quarters+nickels+pennies;
	
	remainder=total%100; //divide to find amount of cents
	total/=100;
	total+=dollars;
	
	//if remainder is less than 10 multiply by 10 to output proper amount of coins
	if (remainder<10)
	{
		remainder*=10;
	}
	
	//output total amount
	cout<<"Your total amount is: "<<total<<" dollars and "<<remainder<<" cents ($"<<total<<"."<<remainder<<") \n";
	
	return 0;
}
