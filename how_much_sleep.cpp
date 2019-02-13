#include <iostream>
#include <cmath>
using namespace std;

/* Objective: using user inputs, calculate the total amount of possible sleep
 * this person can get in a week.
 * 
 * Input needed:
 * max hrs of school per day
 * extracurricular activities (total? or by activity?)
 * practice of activity?
 * biological needs (food, bathroom)
 * travel (to and from activites)
 * leisure time
 * hw (what if you do some at school?)
*/

/*	when to use a function: whenever you find yourself cutting and pasting code over and over.
 * why use a function:
 * 	abstraction - assume and implementation works, only deal with interface
 * 	modularity - Legos.. building a program out of descrete chunks
 * 		gain the ability to fix smaller chunks instead of checking every line of code
 */

float sleephrs=168.0;

void menu()
{
	int choice=0;
	
	cout<<"1. "<<"Meals\n"<<"2. "<<"School\n"<<"3. "<<"Extracurriculars\n"<<"4. "<<"Bathroom\n"<<"5. "<<"Travel\n"<<"6. "<<"Free time\n";
	cout<<"CHOICE: ";
	cin>>choice;
}

void test_time(float activity, int limit) //test if amount of time given is valid
	{
		char yesno;
		
		if (activity>limit)
		{
			cout<<"Are you sure? (y for yes and n for no): ";
			cin>>yesno;
		}
	}

int main(int menuchoice)
{
	const int hours_week=168;
	char timeunit='m';
	float schoolhrs=0;
	float dinnerhrs=0;
	int menuchoice=0;
	
	cout<<"We will calculate how much sleep you could possibly get in a week...\n"
	<<"Please enter you choice of activity\n";
	
	cout<<"1. "<<"Meals\n"<<"2. "<<"School\n"<<"3. "<<"Extracurriculars\n"<<"4. "<<"Bathroom\n"<<"5. "<<"Travel\n"<<"6. "<<"Free time\n";
	cout<<"CHOICE: ";
	cin>>choice;
	
	switch(menuchoice)
	{
		case 1:
		{
			int dinner_limit=2;
			
			do {
				cout << "How much time do you spend eating dinner? ";
	            cin >> dinnerhrs;
	            cout << "Was that in minutes (m) or hours (h)? ";
	            cin >> timeunit;
	            if(timeunit == 'm') {
		        dinnerhrs = dinnerhrs / 60; // convert minutes to hours
	            }
	            test_time(dinnerhrs,dinner_limit);
			} while(dinnerhrs>dinner_limit);
			sleephrs-=dinnerhrs;
			break;
		}
		
		case 2:
		{
			int school_limit=12;
			float tot_school=0;
			
			do {
				cout << "How many time do you spend at school a day? ";
				cin >> schoolhrs;
				cout<<"Was that in minutes (m) or hours (h)? ";
				cin>>timeunit;
				if(timeunit=='m'){
				schoolhrs=schoolhrs/60;
				tot_school = schoolhrs * 5.0;
				}
				test_time(tot_school,school_limit);
			} while(tot_school>school_limit);
			sleephrs-=tot_school;
			break;
		}
	}
	
	return 0;
}