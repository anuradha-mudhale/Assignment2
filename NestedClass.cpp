#include<iostream>
using namespace std;
class Bank
{
	private:
		int Ac_No;
		string Holder;
		double balance = 5000;
	public:
			getInfo()
			{
				cout<<"Enter Acoount Number:"<<endl;
				cin>>Ac_No;
				cout<<"Enter the name:"<<endl;
				cin>>Holder;
			}
			setInfo()
			{
				cout<<"Account Holder:"<<Ac_No<<endl;
				cout<<"Name is:"<<Holder<<endl;
			}
class Transaction
{
	private:
		int Amt1,dp;
	public:
		withdraw(Bank &obj)
		{
			if(obj.balance>=0)
			{
				cout<<"Enter the Amt you want to withdraw:"<<endl;
				cin>>Amt1;
				cout<<"you withdrawed:"<<Amt1<<endl;
				cout<<"Total Balance:"<<obj.balance-Amt1;
			
			}
		}
		deposite(Bank &obj)
		{
			cout<<"Enter the deposite amt:"<<endl;
			cin>>dp;
			cout<<"Total Balance After deposite is:"<<dp+obj.balance;
		}
	};	
};
int main()
{
	int choice;
	Bank b1;
	b1.getInfo();
	b1.setInfo();
	Bank::Transaction t1;
    cout<<"enter your choice if you want to withdraw press 1 if you want to debosite press 2:"<<endl;
    cin>>choice;
    if(choice == 1)
    {
     t1.withdraw(b1);		
	}
	else 
	if(choice == 2)
	{
		t1.deposite(b1);
	}
	else
	{
		cout<<"No Change";
	}

}
