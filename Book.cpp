#include<iostream> 
using namespace std;

class Book {
	private:
		int bookId;
		string bookName;
		int price;
	public:
		void inputBook() {
			cout<<"\nEnter Book id: ";
			cin>>bookId;
			cout<<"Enter Book name: ";
			cin>>bookName;
			cout<<"Enter price of book: ";
			cin>>price;
		}
		
		void showBook() {
			cout<<"\nBook Id: "<<bookId<<"\nBook Name: "<<bookName<<"\nBook Price: "<<price<<endl;
		}
};

class Writer {
	private:
		string writerName;
		string address;
		int numBooks;
		Book books[5];
	public:
		void inputWriter() {
			cout<<"\nEnter Writer name: "<<writerName;
			cin>>writerName;
			cout<<"Enter Writer address: "<<address;
			cin>>address;
			cout<<"Enter number of books written by writer (max 5):" ;
			cin>>numBooks;
			if(numBooks>5) {
				cout<<"You can only input upto 5 books."<<endl;
				numBooks=5;
			}
			for(int i=0;i<numBooks;i++) {
				cout<<"\nEnter details for book "<<i+1<<": ";
				books[i].inputBook();
			}
			
		}
		
		void showWriter() {
			cout<<"\nWriter name: "<<writerName;
			cout<<"\nWriter address: "<<address;
			cout<<"\nNumber of books written by writer:"<<numBooks<<endl;
			for(int i=0;i<numBooks;i++) {
				cout<<"\nDisplay details of book "<<i+1<<": ";
				books[i].showBook();
			}
			
		}
};

int main() {
	Writer writer;
	cout<<"Input Writer Details: ";
	writer.inputWriter();
	cout<<"\nDisplay Writer Details: ";
	writer.showWriter();
	return 0;
}