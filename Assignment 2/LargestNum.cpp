#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter the 1st number:"<<endl;
	cin>>num1;
	cout<<"Enter the 2nd number:"<<endl;
	cin>>num2;
	cout<<"Enter the 3rd number:"<<endl;
	cin>>num3;
	if(num1>num2&&num1>num3)
	{
		cout<<"largest Number is:"<<num1<<endl;
	}
	else if(num2>num1&&num2>num3)
	{
		cout<<"largest Number is:"<<num2<<endl;
	}
	else
	{
		cout<<"largest Number is:"<<num3<<endl;
	}
	return 0;
	}
