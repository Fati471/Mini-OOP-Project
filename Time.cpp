#include<iostream>
using namespace std;

class Time {
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
		void input();
		void show();
		
		void operator++ () {
			++minutes;
			if(hours>=24) {
				hours=0;
			}
			if(minutes>=60) {
				++hours;
			}
		}
		
		void operator-- () {
			--minutes;
			if(hours<0) {
				hours=23;
			}
			if(minutes<0) {
				minutes=59;
			}
		}
};

void Time::input() {
	cout<<"Enter Hours: ";
	cin>>hours;
	cout<<"Enter Minutes: ";
	cin>>minutes;
	cout<<"Enter Seconds: ";
	cin>>seconds;
}

void Time::show() {
	cout<<"\nTime in Format (HH:MM:SS) : "<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
}

int main() {
	Time t1(0,0,0);
	t1.input();
	t1.show();
	++t1;
	cout<<"\nAfter incrementing by 1 minute: ";
	t1.show();
	--t1;
	cout<<"\nAfter decrementing by 1 minute: ";
	t1.show();
	return 0;
}