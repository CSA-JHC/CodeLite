#include <iostream>
#include <vector>
using namespace std;

//JESSICA CHIU

/*vector<string> genList={"plastic folders", "glue sticks","pack of colored pencils","pack of crayons","composition book"}
 * genList[0] //first item in the genList vector
 * 
 * vector<string> t_name={"Prater","Threatt","Shafer"}
 *
 * class has xyz (private member variables)
 * do things to xyz (public member variables
 * 
 * 
 * class _____
 * {
 * private:
 * supplies
 * name
 * 
 * public:
 * string getSupplies(int num)
 * {
 * supplies=gentList[num]
 * return supplies
 * }
 * string getName(num index for vector)
 * {
 * teach=t_name[num]
 * return teach
 * }
 * string getOutput()
 * {}
 * }
 * 
 * int main()
 * {
 * string getOutput(object.getSupplies,object.getName)
 * cout<<object.getSupplies(num)
 * cout<<object.getName(num)
 * }
 * 
 */

class Supplies
{
private:
	string supplies1, supplies2, supplies3;
	string name1;
public:
	void getSupplies(int a, int b, int c)
	{
		vector<string> genList={"plastic folders", "glue sticks","pack of colored pencils","pack of crayons","composition book"};
		supplies1=genList[a];
		supplies2=genList[b];
		supplies3=genList[c];
	}
	void getName(int x)
	{
		vector<string> t_name={"Prater","Threatt","Shafer"};
		name1=t_name[x];
	}
	void format(string name, string supp1, string supp2, string supp3)
	{
		cout<<"**"<<name1<<"'s School Supplies List"<<"**"<<'\n';
		cout<<supplies1<<'\n'<<supplies2<<'\n'<<supplies3<<'\n';
	}
	
};

int main()
{
	string asterisk="**";
	string ssl="School Supply List";
	
	Supplies teachname, supp;
	teachname=teachname.getName(0);
	supp=supp.getSupplies(0,1,3);
	
	teachname=teachname.getName(1);
	supp=supp.getSupplies(0,2,4);
	
	teachname=teachname.getName(2);
	
	
	return 0;
}

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