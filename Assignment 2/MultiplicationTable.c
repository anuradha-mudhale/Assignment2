#include<iostream>
using namespace std;
int main()
{
	int i,num=1;
	cout<<"Enter the number";
	cin>>num;
	for(i=1;i<=10;i++)
	{
	num = num*i;
	cout<<"Multiplication Table of given number is"<<num<<endl;	
	}
	return 0;
}
