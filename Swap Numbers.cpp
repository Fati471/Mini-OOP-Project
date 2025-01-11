#include<iostream>
using namespace std;

class Swap {
	private:
		int a, b;
	public:
		Swap(int x, int y);		// For initializing numbers
		void swapNum();		//For swapping numbers
		void display();		//For displaying swapped values
};
Swap::Swap(int x, int y)
{
	a=x;
	b=y;
}

void Swap::swapNum() {
	// For example: a=10, b=20
	int c=a;	// c=10	 
	a=b;		// a=20
	b=c;		// b=10
}

void Swap::display()
{
	cout<<"\nNumber 1: "<<a<<"\nNumber 2: "<<b<<endl;
}

int main() {
	int num1, num2;
	cout<<"Enter Number 1: ";
	cin>>num1;
	cout<<"Enter Number 2: ";
	cin>>num2;
	Swap mySwap(num1, num2);
	cout<<"\nBefore Swapping...";
	mySwap.display();
	mySwap.swapNum();
	cout<<"\nAfter Swapping...";
	mySwap.display();
	return 0;
}