#include<iostream>
using namespace std;

class Bank_Account {
	private:
		string depositorName;
		int accountNo;
		string accountType;
		int balanceAmount;
	public:
		Bank_Account() : depositorName(""), accountNo(0), accountType(""), balanceAmount(0) {}
		Bank_Account(string name, int number, string type, int balance);
		void deposit(int amount);
		void withdraw(int amount);
		void display();
		Bank_Account operator+ (Bank_Account r) {
			Bank_Account temp;
			temp.balanceAmount=r.balanceAmount+balanceAmount;
			return temp;
		}
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
	string name1, type1, name2, type2;
	int balance1, number1, balance2, number2;
	cout<<"Enter depositor 1 name: ";
	cin>>name1;
	cout<<"Enter account number: ";
	cin>>number1;
	cout<<"Enter account type: ";
	cin>>type1;
	cout<<"Enter initial balance: ";
	cin>>balance1;
	
	cout<<"\nEnter depositor 2 name: ";
	cin>>name2;
	cout<<"Enter account number: ";
	cin>>number2;
	cout<<"Enter account type: ";
	cin>>type2;
	cout<<"Enter initial balance: ";
	cin>>balance2;
	
	Bank_Account account1(name1, number1, type1, balance1), account2(name2, number2, type2, balance2);
	Bank_Account account3;
	
	int amount;
	while(true) {
	cout<<"\nWELCOME TO ALFALAH BANK"<<endl;
	cout<<"\n...Main Menu..."<<endl;
	cout<<"\n1. Deposit Money (Account 1)"<<endl;
	cout<<"2. Withdraw Money (Account 1)"<<endl;
	cout<<"3. Display details (Account 1)"<<endl;
	cout<<"4. Deposit Money (Account 2)"<<endl;
	cout<<"5. Withdraw Money (Account 2)"<<endl;
	cout<<"6. Display details (Account 2)"<<endl;
	cout<<"7. Combined account details"<<endl;
	cout<<"8. Exit "<<endl;
	int choice;
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice) {
		case 1:
			account1.deposit(amount);
			break;
		case 2:
			account1.withdraw(amount);
			break;
		case 3:
			account1.display();
			break;
		case 4:
			account2.deposit(amount);
			break;
		case 5:
			account2.withdraw(amount);
			break;
		case 6:
			account2.display();
			break;
		case 7:
			account3=account1+account2;
			cout<<"Combined Account Details: ";
			account3.display();
			break;
		case 8:
			return 1;
			break;
		default:
			cout<<"Invalid choice!";
		}
	}
	return 0;
}