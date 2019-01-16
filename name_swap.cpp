#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b, c;
	string name1, name2, name3;
	
	cout<<"Enter 3 names: ";
	cin>>name1>>name2>>name3;
	
	if (name1>name2)
	{
		if (name1>name2)
		{
			a=name1;
		}
	}
	
	if (name2>name1)
	{
		if (name2>name3)
		{
			a=name2;
		}
	}
	
	if (name3>name1)
	{
		if (name3>name2)
		{
			a=name3;
		}
	}
	
	if (a==name1)
	{
		if (name2>name3)
		{
			b=name2;
			c=name3;
		}
		else if (name3>name2)
		{
			b=name3;
			c=name2;
		}
	}
	
	if (a==name2)
	{
		if (name1>name3)
		{
			b=name1;
			c=name3;
		}
		else if (name3>name1)
		{
			b=name3;
			c=name1;
		}
	}
	
	if (a==name3)
	{
		if (name2>name1)
		{
			b=name2;
			c=name1;
		}
		else if (name1>name2)
		{
			b=name1;
			c=name2;
		}
	}
    
    	if (name1==name2)
	{
		if (name3>name1)
		{
			c=name1;
			b=name2;
			a=name3;
		}
		if (name3<name1)
		{
			c=name3;
			b=name2;
			a=name1;
		}
	}
	
	if (name1==name3)
	{
		if (name2>name1)
		{
			c=name1;
			b=name3;
			a=name2;
		}
		if (name2<name1)
		{
			c=name2;
			b=name3;
			a=name1;
		}
	}
    
	if (name2==name3)
	{
		if (name1>name2)
		{
			c=name2;
			b=name3;
			a=name1;
		}
		if (name1<name2)
		{
			c=name1;
			b=name2;
			a=name3;
		}
	}
	
	cout << c << ", "<< b << ", " << a << "\n";
	cout<<"\n";
	
	
	return 0;
}
