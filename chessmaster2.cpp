#include <iostream>
#include <cmath>
using namespace std;

//JESSICA CHIU

void calculate(int number) //calculate the amount of squares needed for required amount of pennies
{
	//define variables
	int sum=0;
	int pennies=0;
	int squares=0;
	int value=0;
	
	while (pennies<number) //while the amount of pennies isn't reached
	{
		sum=pow(2,value); //keep adding to amount of pennies and squares
		pennies+=sum;
		squares+=1;
		value+=1;
		//cout<<pennies<<'\n';
	}
	cout<<squares<<" square(s) are required to earn "<<number<<" pennies \n"; //tell the user
}

void calculate2(int number) //calculate the amount of pennies needed for required amount of squares
{
	//define variables
	int sum=0;
	int pennies=0;
	int squares=0;
	int value=0;
	
	while (squares!=number) //while amount of squares isn't reached
	{
		sum=pow(2,value); //keep adding to amount of pennies and squares
		pennies+=sum;
		squares+=1;
		value+=1;
		//cout<<pennies<<'\n';
	}
	cout<<pennies<<" pennies are earned for "<<squares<<" squares \n"; //tell the user
}

int main()
{
	//define variables
	int choice=0;
	int amount=0;
	
	cout<<""
	
	//menu
	cout<<"1. Calculate the amount of pennies the boy will have on square X\n";
	cout<<"2. Calculate the amount of squares he boy will have with Y amount of pennies\n";
	cout<<"CHOICE: ";
	cin>>choice;
	
	if (choice==1) //if they choose the first choice
	{
		cout<<"How many pennies? "; //ask how many pennies they want and go to function to calculate
		cin>>amount;
		calculate(amount);
	}
	
	if (choice==2) //if they choose the second choice
	{
		cout<<"How many squares? "; //ask how many squares they want and go to function to calculate
		cin>>amount;
		calculate2(amount);
	}
	
	return 0;
}
