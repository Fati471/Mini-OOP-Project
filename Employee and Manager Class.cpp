#include<iostream>
using namespace std;

class Employee {
	private:
		int employeeId;
		float scale;
	public:
		Employee(int eId, float s) : employeeId(eId), scale(s) {}
		void employee_input();
		void employee_show();
};

void Employee::employee_input() {
	cout<<"\nEnter Employee Id: ";
	cin>>employeeId;
	cout<<"Enter scale: ";
	cin>>scale;
}

void Employee::employee_show() {
	cout<<"Employee id: "<<employeeId<<"\nEmployee Scale: "<<scale<<endl;
}

class Manager : public Employee {
	private:
		int managerId;
		string department;
	public:
		Manager(int mId, string d, int eId, float s) : managerId(mId), department(d), Employee(eId, s) {}
		void manager_input();
		void manager_show();
};

void Manager::manager_input() {
	employee_input();
	cout<<"Enter Manager Id: ";
	cin>>managerId;
	cout<<"Enter Department: ";
	cin>>department;
}

void Manager::manager_show() {
	employee_show();
	cout<<"Manager Id: "<<managerId<<"\nManager Department: "<<department<<endl;
}

int main() {
	int mId, eId;
	float scale;
	string depart;
	Manager manager(mId, depart, eId, scale);
	cout<<"Enter Manager Details: "<<endl;
	manager.manager_input();
	cout<<"\nDisplay Manager Details: "<<endl;
	manager.manager_show();
	return 0;
}