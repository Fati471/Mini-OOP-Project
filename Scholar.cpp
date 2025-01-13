#include<iostream>
using namespace std;

class Teacher {
	private:
		string name;
		int age;
		string address;
	public:
		void teacherInput() {
			cout<<"\nEnter teacher name: ";
			cin>>name;
			cout<<"Enter teacher age: ";
			cin>>age;
			cout<<"Enter teacher address: ";
			cin>>address;
		}
		
		void showTeacher() {
			cout<<"Teacher Name: "<<name<<"\nTeacher Age: "<<age<<"\nTeacher Address: "<<address<<endl;
		}
};

class Writer {
	private:
		string writerName;
		string writerAddress;
		int bookNo;
	public:
		void writerInput() {
			cout<<"\nEnter writer name: ";
			cin>>writerName;
			cout<<"Enter writer address: ";
			cin>>writerAddress;
			cout<<"Enter number of books: ";
			cin>>bookNo;
		}
		
		void showWriter() {
			cout<<"Writer Name: "<<writerName;
			cout<<"\nWriter Address: "<<writerAddress;
			cout<<"\nNumber of books written by the writer: "<<bookNo;
		}
};

class Scholar : public Teacher, public Writer {
	public:
		void ScholarInput() {
			cout<<"Input Scholar's Teacher Details: ";
			teacherInput();
			cout<<"\nInput Scholar's Writer Details: ";
			writerInput();
		}
		
		void showScholar() {
			cout<<"\nDisplay Scholar Teacher Details: "<<endl;
			showTeacher();
			cout<<"\nDisplay scholar Writer Details: "<<endl;
			showWriter();
		}
};
int main() {
	Scholar myScholar;
	myScholar.ScholarInput();
	myScholar.showScholar();
	return 0;
}