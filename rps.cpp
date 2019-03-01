#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//JESSICA CHIU

void play(); //prototype functions
void menu();

void playagain() //if user wants to play again run this function
{
	char again;
	
	//ask user what they want and based off of response decide what to do
	cout<<"Would you like to play again (enter y for yes and n for no)? ";
	cin>>again;
	if (again=='y')
	{
		menu();
	}
	else if (again=='n')
	{
		cout<<'\n';
		cout<<"Thanks for playing! \n\n";
	}
	else
	{
		cout<<'\n';
		cout<<"That wasn't an option...\n";
		playagain();
	}
}

void winner(int pscore, int ascore) //print out who winner is based off of previous function's output
{
	if (pscore==1)
	{
		cout<<"You won!\n"; //player won
	}
	if (ascore==1)
	{
		cout<<"You lost!\n"; //ai won
	}
	
	playagain();
}

void play(int generalscore,int plscore, int a_score) //play the game!
{
	//identify variables
	int number;
	string aiposition;
	unsigned seed;
	int best=0;
	char position;
	
	//ask the user for input
	while (a_score<generalscore||plscore<generalscore)
	{
	cout<<"Rock (r), Paper (p) or Scissors (s)? Please enter the corresponding letter: ";
	cin>>position;
	cout<<'\n';
	
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
				a_score+=1;
			}
			else if (aiposition=="s")
			{
				cout<<"You won!\n";
				plscore+=1;
			}
		}
		break;
		
		case 'p':
		{
			if (aiposition=="r")
			{
				cout<<"You won!\n";
				plscore+=1;
			}
			else if (aiposition=="p")
			{
				cout<<"You tied!\n";
			}
			else if (aiposition=="s")
			{
				cout<<"You lost!\n";
				a_score+=1;
			}
		}
		break;
		
		case 's':
		{
			if (aiposition=="r")
			{
				cout<<"You lost!\n";
				a_score+=1;
			}
			else if (aiposition=="p")
			{
				cout<<"You won!\n";
				plscore+=1;
			}
			else if (aiposition=="s")
			{
				cout<<"You tied!\n";
			}
		}
		break;
		
		case default:
		{
			cout<<"That wasn't an option... \n";
			play(generalscore,plscore,a_score);
		}
		break;
	}
	
	//show user the score each round
	cout<<'\n'<<"SCOREBOARD --->\n";
	cout<<"AISCORE: "<<a_score<<'\n'<<"PLAYERSCORE: "<<plscore<<'\n';
	cout<<'\n';
	
	//if one of the players scores is equal to the amount of rounds needed, determine winner and go to winner function
	if(plscore==generalscore)
	{
		//cout<<"player won";
		plscore=1;
		a_score=0;
		winner(plscore, a_score);
		break;
	}
	if(a_score==generalscore)
	{
		//cout<<"ai won";
		plscore=0;
		a_score=1;
		winner(plscore, a_score);
		break;
	}
	
	}
}

void menu() //menu
{
	int option=0;
	
	//let user chooose an option
	cout<<"Choose an option - \n";
	cout<<"1. Best of 3\n2. Best of 5\n";
	cout<<"CHOICE (please enter 1 or 2): ";
	cin>>option;
	int best=0;
	
	//go to function with amount of rounds
	if (option==1)
	{
		best=3;
		int playerscore=0;
		int aiscore=0;
		cout<<'\n';
		play(best,playerscore,aiscore);
	}
	
	else if (option==2)
	{
		best=5;
		int playerscore=0;
		int aiscore=0;
		cout<<'\n';
		play(best,playerscore,aiscore);
	}
	
	else
	{
		cout<<'\n';
		cout<<"That wasn't an option... \n";
		menu();
	}
	
}

int main()
{
	
	menu(); //go to menu
	
	return 0;
}
