#include <iostream>
using namespace std;

//JESSICA CHIU

int main()
{
	//identify variables
	int pennies=0;
	int value=1;
	int squares=0;
	
	//determine the amount of squares on a chessboard until it reaches 10000
	//multiply by 2 and add it to value until it reaches required amount (while loop)
	while (pennies<1000)
	{
		value*=2;
		pennies+=value;
		squares+=1;
	}
	
	cout<<squares<<" square(s) are required to earn 1000 pennies \n"; //tell the user
	
	//do the same thing for 1000000 and 1000000000
	while (pennies<1000000)
	{
		value*=2;
		pennies+=value;
		squares+=1;
	}
	
	cout<<squares<<" square(s) are required to earn 1000000 pennies \n";
	
	while (pennies<1000000000)
	{
		value*=2;
		pennies+=value;
		squares+=1;
	}
	
	cout<<squares<<" square(s) are required to earn 1000000000 pennies \n";
	
	return 0;
}
