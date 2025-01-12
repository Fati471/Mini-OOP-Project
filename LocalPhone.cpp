#include<iostream>
using namespace std;

class LocalPhone {
	private:
		int phone;
	public:
		void setPhone(int p);
		int getPhone();
		void inputLocal();
		void showLocal();
};

void LocalPhone::setPhone(int p) {
	phone=p;
}

int LocalPhone::getPhone() {
	return phone;
}

void LocalPhone::inputLocal() {
	cout<<"Enter local telephone number: ";
	cin>>phone;
}

void LocalPhone::showLocal() {
	cout<<"\nLocal phone number: "<<phone<<endl;
}

class NatPhone : public LocalPhone {
	private:
		int cityCode;
	public:
		void set_CityCode(int c);
		int get_CityCode();
		void inputNat();
		void showNat();
		void dispalyPhone();
};

void NatPhone::set_CityCode(int c) {
	cityCode=c;
}

int NatPhone::get_CityCode() {
	return cityCode;
}

void NatPhone::inputNat() {
	cout<<"Enter city code: ";
	cin>>cityCode;
}

void NatPhone::showNat() {
	cout<<"\nCity Code: "<<cityCode;
}

void NatPhone::dispalyPhone() {
	cout<<"National Phone Number: "<<get_CityCode()<<"-"<<getPhone();
}

class IntPhone : public NatPhone {
	private: 
		int countryCode;
	public:
		void set_CountryCode(int c);
		int get_CountryCode();
		void inputInt();
		void showInt();
		void displayPhone();	
};

void IntPhone::set_CountryCode(int c) {
	countryCode=c;
}

int IntPhone::get_CountryCode() {
	return countryCode;
}

void IntPhone::inputInt() {
	cout<<"Enter Country code: ";
	cin>>countryCode;
}

void IntPhone::showInt() {
	cout<<"Country Code: "<<countryCode;
}

void IntPhone::displayPhone() {
	cout<<"International Phone Number: "<<get_CountryCode()<<"-"<<get_CityCode()<<"-"<<getPhone();
}
int main() {
	IntPhone intPhone;
	cout<<"Input International Phone Details: "<<endl;
	intPhone.inputInt();
	intPhone.inputNat();
	intPhone.inputLocal();
	cout<<"\nDisplay International Phone Details: "<<endl;
	intPhone.showInt();
	intPhone.showNat();
	intPhone.showLocal();
	return 0;
}