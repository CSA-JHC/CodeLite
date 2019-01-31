#include <iostream>
using namespace std;

int main()
{
	int pennies=0;
	int value=1;
	int squares=0;
	
	while (pennies<1000)
	{
		value*=2;
		pennies+=value;
		squares+=1;
	}
	
	cout<<squares<<" square(s) are required to earn 1000 pennies \n";
	
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
