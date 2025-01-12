#include<iostream>
using namespace std;

class Run {
	private:
		string name;
		float distance;
		static float longestDistance;
		static string longestRunner;
	public:
		void get();
		void show();
		string getName();
		float getDistance();
		static void set_longest(string n, float d);
		static void show_Longest();
};

float Run::longestDistance=0.0;
string Run::longestRunner="";

void Run::get() {
	cout<<"\nEnter runner name: ";
	cin>>name;
	cout<<"Enter covered distance: ";
	cin>>distance;
}

void Run::show() {
	cout<<"\nRunner name is "<<name<<".\nDistance covered is "<<distance<<"."<<endl;
}

string Run::getName() {
	return name;
}

float Run::getDistance() {
	return distance;
}

void Run::set_longest(string n, float d) {
	if(d>longestDistance) {
		longestDistance=d;
		longestRunner=n;
	}
}

void Run::show_Longest() {
	cout<<"Runner who covers longest distance of "<<longestDistance<<"km is "<<longestRunner<<"."<<endl;
}

int main() {
	int n;
	cout<<"Enter the number of runners: ";
	cin>>n;
	Run runner[n];
	for(int i=0;i<n;i++) {
		runner[i].get();
		runner[i].show();
		runner[i].set_longest(runner[i].getName(),runner[i].getDistance());
	}
	Run::show_Longest();
	return 0;
}