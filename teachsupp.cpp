#include <iostream>
#include <vector>
using namespace std;

//JESSICA CHIU

class SupplyList{
private:
	vector<string> supply={"pack of colored pencils","pack of crayons","composition notebook","glue sticks","plastic folders", "ruler"};
	int quantity;
	
public:
	string getType(int index)
	{
		string x=supply[index];
		return x;
	}
	
	void getQuantity()
	{
		cout<<"This is how many of the supply you should get";
	}
};

class Teacher{
private:
	vector<string> teachername={"Miss Prater", "Mrs. Threatt", "Mr. Shafer"};
	SupplyList supplything;
	
public:
	string getName(int index)
	{
		string z=teachername[index];
		
		return z;
	}
	
	string getSupplies(int y,int z,int w)
	{
		string supply1=supplything.getType(y);
		string supply2=supplything.getType(z);
		string supply3=supplything.getType(w);
		
		return supply1,supply2,supply3;
	}
};

int main()
{
	Teacher t_name1,t_name2,t_name3;
	Teacher supplies;
	
	//Miss Prater
	string x=t_name1.getName(0);
	string list=supplies.getSupplies(0,1,2);
	
	cout<<"**"<<x<<"'s School Supply List**\n";
	
	/*
	//Mrs. Threatt
	string y=t_name2.getName(0);
	vector<string> allsupplies={};
	
	string a=supplies.getSupplies(4);
	allsupplies.push_back(a);
	string b=supplies.getSupplies(0);
	allsupplies.push_back(b);
	string c=supplies.getSupplies(2);
	allsupplies.push_back(c);
	
	cout<<"**"<<x<<"'s School Supply List**\n";
	cout<<a<<'\n';
	cout<<b<<'\n';
	cout<<c<<'\n'<<'\n';
	*/
	
	return 0;
}


/*
class Supplies
{
private:
	string t_name;
	string prefix;
	vector<string> supplies;
	
public:
	Supplies(vector<string> supplies_var, string name, char marital, char gender)
	{
		supplies=supplies_var;//assigns parameters to member variables
		t_name=name;
		if (gender=='M')//uses gender and marital status to find prefix
		{
			prefix="Mr. ";
		}
		else if (gender=='F')
		{
			if (marital=='M')
			{
				prefix="Mrs. ";
			}
			else if (marital=='S')
			{
				prefix="Miss ";
			}
		}
	}
	void getSupplies(int index)
	{
		vector<string> genList={"plastic folders", "glue sticks","pack of colored pencils","pack of crayons","composition book"};
		supplies=genList[index]
	}
	void format(string name, string supp1, string supp2, string supp3)
	{
		cout<<"**"<<prefix<<t_name<<"'s School Supplies List"<<"**"<<'\n';
		//cout<<supplies1<<'\n'<<supplies2<<'\n'<<supplies3<<'\n';
	}
};

int main()
{
	char marital1='S';
	char gender1='F';
	char marital2='M';
	char gender2='F';
	char marital3='M';
	char gender3='M';
	
	Supplies prater()
	
	
	return 0;
}
 */

/*
int main()
{
	//boiler plate text
	string asterisk="**";
	string ssl="School Supply List";
	
	//teachers
	string kinder="Prater";
	string socialstudies="Threatt";
	string math_science="Shafer";
	
	//school supplies
	string pf="plastic folders";
	string gs="glue sticks";
	string cp="pack of colored pencils";
	
	//prefix
	//vector<string> prefix={"Mr. ","Mrs. ","Miss ","Ms. ","Dr. "};
	
	cout<<asterisk<<"Ms. "<<kinder<<"'s "<<ssl<<asterisk<<"\n";
	cout<<pf<<'\n'
		<<gs<<'\n'
		<<"packs of crayons \n"
		<<'\n';
	
	cout<<asterisk<<"Mrs. "<<socialstudies<<"'s "<<ssl<<asterisk<<"\n";
	cout<<pf<<'\n'
		<<cp<<'\n'
		<<"composition book \n"
		<<'\n';
	
	cout<<asterisk<<"Mr. "<<math_science<<"'s "<<ssl<<asterisk<<'\n';
	cout<<gs<<'\n'
		<<cp<<'\n'
		<<"ruler \n"
		<<'\n';
*/