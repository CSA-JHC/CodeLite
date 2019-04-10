#include <iostream>
#include <vector>
using namespace std;

//JESSICA CHIU

class SupplyList{
private:
	vector<string> supply={"pack of colored pencils","pack of crayons","composition notebook","glue sticks","plastic folders", "ruler"};
	int quantity;
	
public:
	void getType(int index)
	{
		string x=supply[index];
	}
	
	void getQuantity()
	{
		cout<<"This is how many of the supply you should get";
	}
};

class Teacher{
private:
	vector<string> teachername={"Miss Prater", "Mrs. Threatt", "Mr. Shafer"};
	SupplyList m;
	
public:
	void getName(int z)
	{
		string
	}
	
	void getSupplies(int y)
	{
		m.getType(y)
		//vector@____
	}
};

int main()
{
	int indexnum;
	
	Teacher t_name;
	t_name.getName(0);
	cout<<t_name;
	
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