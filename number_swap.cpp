#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	int a, b, c;
	
	cout<<"Enter 3 numbers: ";
	cin>>num1>>num2>>num3;
	
	if (num1>num2)
	{
		if (num1>num2)
		{
			a=num1;
		}
	}
	
	if (num2>num1)
	{
		if (num2>num3)
		{
			a=num2;
		}
	}
	
	if (num3>num1)
	{
		if (num3>num2)
		{
			a=num3;
		}
	}
	
	if (a==num1)
	{
		if (num2>num3)
		{
			b=num2;
			c=num3;
		}
		else if (num3>num2)
		{
			b=num3;
			c=num2;
		}
	}
	
	if (a==num2)
	{
		if (num1>num3)
		{
			b=num1;
			c=num3;
		}
		else if (num3>num1)
		{
			b=num3;
			c=num1;
		}
	}
	
	if (a==num3)
	{
		if (num2>num1)
		{
			b=num2;
			c=num1;
		}
		else if (num1>num2)
		{
			b=num1;
			c=num2;
		}
	}
	
	cout << c << ", "<< b << ", " << a << "\n";
	
	return 0;
}
