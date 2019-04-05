#include <iostream>
#include <vector>
using namespace std;

//JESSICA CHIU

//class Teacher{
//private:
//	string teachername;
//	string prefix;
//	vector<string> supplies{};
//	
//public:
//	void print_info{
//		cout<<"**"<<teachername<<"'s school supply list**";
//	}
//	
//	
//}

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
	vector<string> prefix={"Mr. ","Mrs. ","Miss ","Ms. ","Dr. "};
	
	cout<<asterisk<<prefix[2]<<kinder<<"'s "<<ssl<<asterisk<<"\n";
	cout<<pf<<'\n'
		<<gs<<'\n'
		<<"packs of crayons \n"
		<<'\n';
	
	cout<<asterisk<<prefix[1]<<socialstudies<<"'s "<<ssl<<asterisk<<"\n";
	cout<<pf<<'\n'
		<<cp<<'\n'
		<<"composition book \n"
		<<'\n';
	
	cout<<asterisk<<prefix[0]<<math_science<<"'s "<<ssl<<asterisk<<'\n';
	cout<<gs<<'\n'
		<<cp<<'\n'
		<<"ruler \n"
		<<'\n';
	
	return 0;
}