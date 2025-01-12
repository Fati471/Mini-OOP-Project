#include<iostream>
using namespace std;

class DB;

class DM {
	private:
		int meters;
		double centimeters;
	public:
		DM(int meter, double centimeter) : meters(meter), centimeters(centimeter) {}
		friend void add(DM& object1, DB& object2);
		void display();
};

void DM::display() {
	cout<<"Total ditance: "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
}

class DB {
	private:
		int feets;
		double inches;
	public:
		DB(int feet, double inch): feets(feet), inches(inch) {}
		friend void add(DM& object1, DB& object2);
		void display();
};

void DB::display() {
	cout<<"Total distance: "<<feets<<" feet "<<inches<<" inches"<<endl;
}

void add(DM& object1, DB& object2) {
	double DM_centimeter=(object1.meters*100)+object1.centimeters;
	double DB_centimeter=(object2.feets*30.48)+(object2.inches*2.54);
	double totalDistance=DM_centimeter+DB_centimeter; 
	
	object1.meters=totalDistance/100; 
	object1.centimeters=totalDistance-(object1.meters*100);
	
	object2.feets=totalDistance/30.48;
	object2.inches=(totalDistance/2.54)-(object2.feets*12);
}

int main() {
	double meter, centimeter, feet, inch;
	cout<<"Enter distance in DM format: "<<endl;
	cout<<"Enter meters: ";
	cin>>meter;
	cout<<"Enter centimeters: ";
	cin>>centimeter;
	DM DMobj(meter, centimeter);
	
	cout<<"\nEnter distance in DB format: "<<endl;
	cout<<"Enter feet: ";
	cin>>feet;
	cout<<"Enter inches: ";
	cin>>inch;
	DB DBobj(feet, inch);
	
	cout<<"\nBefore Adding..."<<endl;
	DMobj.display();
	DBobj.display();
	add(DMobj, DBobj);
	
	cout<<"\nAfter Adding..."<<endl;
	DMobj.display();
	DBobj.display();
	return 0;
}