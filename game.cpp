#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//JESSICA CHIU

int main()
{
	//identify variables
	int number;
	char position;
	string aiposition;
	unsigned seed;
	
	//ask the user for input
	cout<<"Rock (r), Paper (p) or Scissors (s)? Please enter the corresponding letter: ";
	cin>>position;
	
	//set up random function to find position of the oponent
	seed=time(0);
	srand(seed);
	
	number=rand()%3+1;
	
	//based off of random, let the user know what they decided to play
	switch (number)
	{
		case 1:
		{
			aiposition="r";
			cout<<"Your oponent chose Rock \n";
		}
		break;
		
		case 2:
		{
			aiposition="p";
			cout<<"Your oponent chose Paper \n";
		}
		break;
		
		case 3:
		{
			aiposition="s";
			cout<<"Your oponent chose Scissors \n";
		}
		break;
	}
	
	//based off of users input, determine whether they lost, won, or tied
	switch (position)
	{
		case 'r':
		{
			if (aiposition=="r")
			{
				cout<<"You tied!\n";
			}
			else if (aiposition=="p")
			{
				cout<<"You lost!\n";
			}
			else if (aiposition=="s")
			{
				cout<<"You won!\n";
			}
		}
		break;
		
		case 'p':
		{
			if (aiposition=="r")
			{
				cout<<"You won!\n";
			}
			else if (aiposition=="p")
			{
				cout<<"You tied!\n";
			}
			else if (aiposition=="s")
			{
				cout<<"You lost!\n";
			}
		}
		break;
		
		case 's':
		{
			if (aiposition=="r")
			{
				cout<<"You lost!\n";
			}
			else if (aiposition=="p")
			{
				cout<<"You won!\n";
			}
			else if (aiposition=="s")
			{
				cout<<"You tied!\n";
			}
		}
		break;
	}
	
	return 0;
}
