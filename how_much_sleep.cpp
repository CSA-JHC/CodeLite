#include <iostream>
#include <cmath>
using namespace std;

//JESSICA CHIU

void test_time(float activity, int limit) //test if amount of time given is valid
	{
        if (activity>limit)
        {
            cout<<"That doesn't seem right.. try again..\n";
            cout<<'\n';
        }
	}

void test_amount(float activity, int limit) //test if amount of days for extra curriculars given is valid
	{
        if (activity>limit)
        {
            cout<<"That doesn't seem right.. try again..\n";
            cout<<'\n';
        }
	}

int main()
{
    //define variables
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
    
    //explain the proram
	cout<<"This program will determine how much sleep you will get in a week!\n\n";
	
    //calculate the amount of hours it takes to eat dinner every week
	int dinner_limit=2;

	do { //keep asking if the time seems unreasonable
        cout << "How much time do you spend eating dinner a day? ";
	    cin >> dinnerhrs;
	    cout << "Was that in minutes (m) or hours (h)? ";
	    cin >> timeunit;
	    if(timeunit == 'm') {
	    dinnerhrs = dinnerhrs / 60; // convert minutes to hours if time given is in minutes
	    }
	    test_time(dinnerhrs,dinner_limit); //test amount given
	} while(dinnerhrs>dinner_limit);
	dinnerhrs=dinnerhrs*7; //total amount per week
	sleephrs-=dinnerhrs; //subtract from total amount of hours
	cout<<'\n';
	
    //calculate the amount of hours they are at school
	int school_limit=9;
	
	do {
		cout << "How much time do you spend at school a day? ";
		cin >> schoolhrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		if(timeunit=='m'){
		schoolhrs=schoolhrs/60;
		}
		test_time(schoolhrs,school_limit);
	} while(schoolhrs>school_limit);
	schoolhrs = schoolhrs * 5.0;
	sleephrs-=schoolhrs;
	cout<<'\n';
	
    //calculate the amount of hours spent on extracurriculars
	int extra_limit=12;
	float amount=0;
    int amount_limit=7;
	
	do {
		cout << "How much time do you spend doing extracurriculars a day? ";
		cin >> extrahrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		cout<<"How many times a week? ";
		cin>>amount;
		if(timeunit=='m'){
		extrahrs=extrahrs/60;
		}
		test_time(extrahrs,extra_limit);
        test_amount(amount,amount_limit); //test amount of days given
	} while((extrahrs>extra_limit)||(amount>amount_limit));
	extrahrs=extrahrs*amount;
	sleephrs-=extrahrs;
	cout<<'\n';
	
    //calculate amount of time spent in the bathroom
	int bathroom_limit=5;
	
	do {
		cout << "How much time do you spend in the bathroom a day? ";
		cin >> bathroomhrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		if(timeunit=='m'){
		bathroomhrs=bathroomhrs/60;
		}
		test_time(bathroomhrs,bathroom_limit);
	} while(bathroomhrs>bathroom_limit);
	bathroomhrs=bathroomhrs*7;
	sleephrs-=bathroomhrs;
	cout<<'\n';
	
    //calculate the amount of time spent traveling/driving
	int travel_limit=24;
	
	do {
		cout << "How much time do you spend traveling a day? ";
		cin >> travelhrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		if(timeunit=='m'){
		travelhrs=travelhrs/60;
		}
		test_time(travelhrs,travel_limit);
	} while(travelhrs>travel_limit);
	travelhrs = travelhrs * 7.0;
	sleephrs-=travelhrs;
	cout<<'\n';
	
    //calculate the amount of time spent on free time
	int free_limit=12;
	
	do {
		cout << "How much time do you spend having free time a day? ";
		cin >> freehrs;
		cout<<"Was that in minutes (m) or hours (h)? ";
		cin>>timeunit;
		if(timeunit=='m'){
		freehrs=freehrs/60;
		}
		test_time(freehrs,free_limit);
	} while(freehrs>free_limit);
	freehrs = freehrs * 7.0;
	sleephrs-=freehrs;
	cout<<'\n';
	
    //print how much sleep they have left in the week
	cout<<"You have "<<sleephrs<<" hours left in the week for sleeping.\n";
	
	return 0;
}