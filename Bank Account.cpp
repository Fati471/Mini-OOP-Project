#include<iostream>
using namespace std;

class Bank_Account {
	private:
		string depositorName;
		int accountNo;
		string accountType;
		int balanceAmount;
	public:
		Bank_Account(string name, int number, string type, int balance);
		void deposit(int amount);
		void withdraw(int amount);
		void display();
};

Bank_Account::Bank_Account(string name, int number, string type, int balance) {
	depositorName=name;
	accountNo=number;
	accountType=type;
	balanceAmount=balance;
}

void Bank_Account::deposit(int amount) {
	cout<<"\nEnter the amount you want to deposit: ";
	cin>>amount;
	balanceAmount+=amount;
	cout<<"Amount deposited successfully!";
	cout<<"\nNew balance: "<<balanceAmount<<endl;
}

void Bank_Account::withdraw(int amount) {
	cout<<"\nEnter the amount you want to want to withdraw: ";
	cin>>amount;
	if(balanceAmount<amount) {
		cout<<"Your total balance: "<<balanceAmount<<endl;
		cout<<"Amount exceed balance amount!";
	} else {
		balanceAmount-=amount;
		cout<<"Amount withdrawal Successful";
		cout<<"\nNew balance : "<<balanceAmount<<endl;
	}
}

void Bank_Account::display() {
	cout<<"\nDepositor Name: "<<depositorName<<"\nBalance :"<<balanceAmount<<endl;
}

int main() {
	string name, type;
	int balance, number;
	cout<<"Enter depositor's name: ";
	cin>>name;
	cout<<"Enter account number: ";
	cin>>number;
	cout<<"Enter account type: ";
	cin>>type;
	cout<<"Enter initial balance: ";
	cin>>balance;
	
	Bank_Account account(name, number, type, balance);
	int amount;
	while(true) {
	cout<<"\nWELCOME TO ALFALAH BANK"<<endl;
	cout<<"\n...Main Menu..."<<endl;
	cout<<"\n1. Deposit Money "<<endl;
	cout<<"2. Withdraw Money "<<endl;
	cout<<"3. Display details "<<endl;
	cout<<"4. Exit "<<endl;
	int choice;
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice) {
		case 1:
			account.deposit(amount);
			break;
		case 2:
			account.withdraw(amount);
			break;
		case 3:
			account.display();
			break;
		case 4:
			return 1;
			break;
		default:
			cout<<"Invalid choice!";
		}
	}
	
	return 0;
}