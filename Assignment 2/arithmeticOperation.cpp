#include<iostream>
using namespace std;
int main()
{
	int a,b,c,choice;
	cout<<"Arithmetic Operations:"<<endl;
	cout<<"1:Addition"<<endl;
	cout<<"2:substraction"<<endl;
	cout<<"3:Multiplication"<<endl;
	cout<<"4:Division"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	switch(choice)
	{
	case 1: 
			c=a+b;
			cout<<"Adition is:"<<c;
			break;
	case 2: 
			c=a-b;
			cout<<"Substraction is:"<<c;
			break;
	case 3:
			c=a*b;
			cout<<"Mutiplication is:"<<c;
			break;
	case 4: 
			c=a/b;
			cout<<"Division is:"<<c;
			break;
	default:
		cout<<"Wrong choice";
		break;		
	}
	return 0;
}
