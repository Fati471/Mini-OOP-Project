#include<iostream>
using namespace std;

class ComplexNumber {
	private:
		double real;
		double imag;
	public:
		ComplexNumber() : real(0), imag(0) {}
		
		void input() {
			cout<<"Enter real part: ";
			cin>>real;
			cout<<"Enter imaginary part: ";
			cin>>imag;
		}
		
		void show() {
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		
		ComplexNumber operator+(ComplexNumber r) {
			ComplexNumber temp;
			temp.real=r.real+real;
			temp.imag=r.imag+imag;
			return temp;
		}
		
		ComplexNumber operator-(ComplexNumber r) {
			ComplexNumber temp;
			temp.real=r.real-real;
			temp.imag=r.imag-imag;
			return temp;
		}
		
		ComplexNumber operator*(ComplexNumber r) {
			ComplexNumber temp;
			temp.real=r.real*real;
			temp.imag=r.imag*imag;
			return temp;
		}
		
		ComplexNumber operator/(ComplexNumber r) {
			ComplexNumber temp;
			temp.real=r.real/imag;
			temp.imag=r.imag/imag;
			return temp;
		}
		bool operator==(ComplexNumber r) {
			return (real=r.real==real && r.imag==imag);
		}
};

int main() {
	ComplexNumber c1, c2, c3;
	cout<<"Enter first complex number: "<<endl;
	c1.input();
	cout<<"\nEnter second complex number: "<<endl;
	c2.input();
	cout<<"\nComplex Number 1: ";
	c1.show();
	cout<<"Complex Number 2: ";
	c2.show();
	c3=c1+c2;
	cout<<"\nSum : ";
	c3.show();
	c3=c1-c2;
	cout<<"Subtract: ";
	c3.show();
	c3=c1*c2;
	cout<<"Multiplication: ";
	c3.show();
	c3=c1/c2;
	cout<<"Division: ";
	c3.show();
	if(c1==c2) {
		cout<<"Comparison: Complex number 1 is equal to complex number 2.";
	} else {
		cout<<"Comparison: Complex number 1 is not equal to complex number 2.";
	}
	return 0;
}