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

void test_time(float activity, int limit) //test if amount of time given is valid
	{
		char yesno;
		
		while (activity>limit)
		{
			cout<<"That's odd but ok...\n";
		}
	}

int main()
{
	const int hours_week=168;
	float sleephrs=168;
	char timeunit='m';
	
	float schoolhrs=0;
	float dinnerhrs=0;
	float extrahrs=0;
	float travelhrs=0;
	float bathroomhrs=0;
	float freehrs=0;
	
	char start;


	cout<<"This program will determine how much sleep you will get in a week!\n\n";
	
	int dinner_limit=2;
	
	do {
		cout << "How much time do you spend eating dinner a day? ";
	    cin >> dinnerhrs;
	    cout << "Was that in minutes (m) or hours (h)? \n";
	    cin >> timeunit;
	    if(timeunit == 'm') {
	    dinnerhrs = dinnerhrs / 60; // convert minutes to hours
	    }
	    test_time(dinnerhrs,dinner_limit);
	} while(dinnerhrs>dinner_limit);
	dinnerhrs=dinnerhrs*7;
	sleephrs-=dinnerhrs;
	//cout<<sleephrs;
	
	int school_limit=45;
	
	do {
		cout << "How much time do you spend at school a day? ";
		cin >> schoolhrs;
		cout<<"Was that in minutes (m) or hours (h)? \n";
		cin>>timeunit;
		if(timeunit=='m'){
		schoolhrs=schoolhrs/60;
		}
		test_time(schoolhrs,school_limit);
	} while(schoolhrs>school_limit);
	schoolhrs = schoolhrs * 5.0;
	sleephrs-=schoolhrs;
	//cout<<sleephrs;
	
	int extra_limit=56;
	float amount=0;
	
	do {
		cout << "How much time do you spend doing extracurriculars a day? ";
		cin >> extrahrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		cout<<"How many times a week? \n";
		cin>>amount;
		if(timeunit=='m'){
		extrahrs=extrahrs/60;
		extrahrs = extrahrs * amount;
		}
		test_time(extrahrs,extra_limit);
	} while(extrahrs>extra_limit);
	extrahrs=extrahrs*amount;
	sleephrs-=extrahrs;
	//cout<<sleephrs;
	
	int bathroom_limit=5;
	
	do {
		cout << "How much time do you spend in the bathroom a day? ";
		cin >> bathroomhrs;
		cout<<"Was that in minutes (m) or hours (h)? \n";
		cin>>timeunit;
		if(timeunit=='m'){
		bathroomhrs=bathroomhrs/60;
		}
		test_time(bathroomhrs,bathroom_limit);
	} while(bathroomhrs>bathroom_limit);
	bathroomhrs=bathroomhrs*7;
	sleephrs-=bathroomhrs;
	//cout<<sleephrs;
	
	int travel_limit=24;
	
	do {
		cout << "How much time do you spend traveling a day? ";
		cin >> travelhrs;
		cout<<"Was that in minutes (m) or hours (h)? \n";
		cin>>timeunit;
		if(timeunit=='m'){
		travelhrs=travelhrs/60;
		}
		test_time(travelhrs,travel_limit);
	} while(travelhrs>travel_limit);
	travelhrs = travelhrs * 7.0;
	sleephrs-=travelhrs;
	//cout<<sleephrs;
	
	int free_limit=12;
	
	do {
		cout << "How much time do you spend having free time a day? ";
		cin >> freehrs;
		cout<<"Was that in minutes (m) or hours (h)? \n";
		cin>>timeunit;
		if(timeunit=='m'){
		freehrs=freehrs/60;
		}
		test_time(freehrs,free_limit);
	} while(freehrs>free_limit);
	freehrs = freehrs * 7.0;
	sleephrs-=freehrs;
	//cout<<sleephrs;
	
	cout<<"You have "<<sleephrs<<" hours left in the week for sleeping.\n";
	
	return 0;
}