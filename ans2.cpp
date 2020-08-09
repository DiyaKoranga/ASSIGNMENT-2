#include<iostream>
using namespace std;

class Account {
private:
	int accBalance;
public:
	Account(int balance) {
		if (balance > 0)
		{
			accBalance = balance;
		} else {
			cout << "Initial balance was invalid,please do not enter negative balance\n";
			balance = 0;
			accBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accBalance = accBalance+amount;

	}
	void Debit (int amount)
	{
		int temp = accBalance-amount;
		if (temp > 0)
		{
			accBalance = accBalance-amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accBalance;
	}

};
int main()
{
    int Balance1;
	cout << "enter the amount you want to open the bank account of 1st person? \n";
	cin >> Balance1;
	Account first(Balance1);
	int amt;
	cout << "Amount to be added in the account of the 1st person:  "<<endl;
	cin >> amt;
	first.Credit(amt);
	cout<<first.getBalance()<<endl;
	float amt1 ;
	cout << "enter the amount you want to remove: "<<endl;
	cin >> amt1;
	first.Debit(amt1);
	cout << first.getBalance()<<endl;
	cout << "enter the amount to open the account of 2nd person: "<<endl;
	cin >> Balance1;
	Account second(Balance1);
	cout << "enter the amount you want to add in 2nd person's account: "<<endl;
	cin >> amt;
	second.Debit(amt);
	cout << second.getBalance()<<endl;
	cout << "enter the amount you want to remove: "<<endl;
	cin >> amt1;
	second.Debit(amt1);
	cout << second.getBalance()<<endl;
    return 0;
}
