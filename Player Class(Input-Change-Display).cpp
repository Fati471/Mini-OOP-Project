// Player class that can input, change, and display player details

#include<iostream>
#include<string>
using namespace std;

class Player {
	private:
		string name;
		int average;
		char team;
	public:
		Player();
		void input();
		void change();
		void display();
};
Player::Player() {
	cout<<"Enter Player name: ";
	getline(cin,name);
	cout<<"Enter Player average: ";
	cin>>average;
	cout<<"Enter Player team: ";
	cin>>team;
}

void Player::input() {
	cout<<"\nEnter Player name: ";
	cin>>name;
	cout<<"Enter Player average: ";
	cin>>average;
	cout<<"Enter Player team: ";
	cin>>team;
}

void Player::change() {
	cout<<"\nEnter new player name: ";
	cin>>name;
	cout<<"Enter new player average: ";
	cin>>average;
	cout<<"Enter new player team: ";
	cin>>team;
}

void Player::display() {
	cout<<"\nPlayer Details:"<<endl;
	cout<<"\nPlayer Name is "<<name<<"."<<endl;
	cout<<"Player average is "<<average<<"."<<endl;
	cout<<"Player team is "<<team<<"."<<endl;
}
int main() {
	Player player;
	int choice;
	while(true) {
		cout<<"\n...Main Menu..."<<endl;
	cout<<"\n1. Input Player details"<<endl;
	cout<<"2. Display Player details"<<endl;
	cout<<"3. Change Player details"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"\nEnter your choice: ";
	cin>>choice;
		switch(choice) {
		case 1:
			player.input();
			break;
		case 2:
			player.display();
			break;
		case 3:
			player.change();
			break;
		case 4:
			return 1;
		default:
			cout<<"Invalid choice";
	}
}
	return 0;
}