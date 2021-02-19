#include <iostream>
#include <cctype>
#include <string>
using namespace std;
void ruser(int min, int acc, char scode){
	cout << "Account Number : " << acc << endl;
	cout << "Minutes Used : " << min << endl;
	cout << "Amount Due : " << (min - 75) * 0.10<< endl;
	cout << "Account Type : Regular\n";
}
void puser(int day, int night, int acc, char scode) {
	cout << "Account Number : " << acc << endl;
	cout << "Minutes Used : " << day + night << endl;
	cout << "Amount Due : " << (day - 75) * 0.10 + (night - 100) * 0.05	<< endl;
	cout << "Account Type : Premium\n";
}

int main() {
	int acc;
	char scode;
	int min;
	int day;
	int night;
	cout << "Enter account number : " << endl;
	cin >> acc;
	cout << "Enter service code : " <<endl;
	cin >> scode;
	if (scode == 'r' || scode  == 'R') {
		cout << "Enter minutes used : " << endl;
		cin >> min;
		ruser(min, acc, scode);
	}
	else if (scode == 'p' || scode == 'P') {
		cout << "Enter minutes used in day : " <<endl;
		cin >> day;
		cout << "Enter minutes used in night : " << endl;
		cin >> night;
		puser(day, night, acc, scode);
	}
}
