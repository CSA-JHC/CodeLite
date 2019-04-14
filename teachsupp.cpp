#include <iostream>
#include <vector>
#include <map>
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
	
	int getQuantity(int num)
	{
        int number=num;
        return num;
	}
};

class Teacher{
private:
	vector<string> teachername={"Miss Prater", "Mrs. Threatt", "Mr. Shafer"};
	SupplyList supplything,amt;
	
public:
	string getName(int index)
	{
		string z=teachername[index];
		return z;
	}
	
	string getSupplies(int index)
	{
		string supply=supplything.getType(index);
		return supply;
	}
    
    int getAmount(int num)
    {
        int y=amt.getQuantity(num);
        return num;
    }
};

int main()
{
    //vector<string> supply={0 "pack of colored pencils", 1 "pack of crayons", 2 "composition notebook", 3 "glue sticks", 4 "plastic folders", 5 "ruler"};
	
	Teacher t_name1,t_name2,t_name3;
	Teacher supplies,total;
	
	//Miss Prater
	string name1=t_name1.getName(0);
	string psupply1=supplies.getSupplies(4);
    int p_qsupply1=total.getAmount(3);
	string psupply2=supplies.getSupplies(3);
    int p_qsupply2=total.getAmount(4);
    string psupply3=supplies.getSupplies(1);
    int p_qsupply3=total.getAmount(1);
    
    cout<<"**"<<name1<<"'s School Supply List**\n";
    cout<<p_qsupply1<<'\t'<<psupply1<<'\n'<<p_qsupply2<<'\t'<<psupply2<<'\n'<<p_qsupply3<<'\t'<<psupply3<<'\n'<<'\n';
    
    //Threatt
    string name2=t_name2.getName(1);
    string tsupply1=supplies.getSupplies(4);
    int t_qsupply1=total.getAmount(2);
    string tsupply2=supplies.getSupplies(0);
    int t_qsupply2=total.getAmount(1);
    string tsupply3=supplies.getSupplies(2);
    int t_qsupply3=total.getAmount(1);
    
    cout<<"**"<<name2<<"'s School Supply List**\n";
    cout<<t_qsupply1<<'\t'<<tsupply1<<'\n'<<t_qsupply2<<'\t'<<tsupply2<<'\n'<<t_qsupply3<<'\t'<<tsupply3<<'\n'<<'\n';
	
    //Shafer
    string name3=t_name3.getName(2);
    string ssupply1=supplies.getSupplies(3);
    int s_qsupply1=total.getAmount(2);
    string ssupply2=supplies.getSupplies(0);
    int s_qsupply2=total.getAmount(1);
    string ssupply3=supplies.getSupplies(5);
    int s_qsupply3=total.getAmount(1);
    
    cout<<"**"<<name3<<"'s School Supply List**\n";
    cout<<s_qsupply1<<'\t'<<ssupply1<<'\n'<<s_qsupply2<<'\t'<<ssupply2<<'\n'<<s_qsupply3<<'\t'<<ssupply3<<'\n'<<'\n';
	
	return 0;
}
