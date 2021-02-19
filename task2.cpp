#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

void f2m(double feet, double in) {
	double meter = 0.3048 * feet;
	double cent = 2.54 * in;
	cout << "METERS : " << meter << "\nCENT : " << cent << endl;				 
}
void m2f(double m, double c) {
	double ft = 3.28084 * m;
	double in = 0.39370 * c;
	cout << "FEETS : " << ft << "\nIN : " << in << endl;				 
	
}
void showChoices() {
	
	int c;
	while (true) {
	
	cout << "PRESS 1 TO CONVERT FEET AND INCHES TO METERS AND CENTIMETER" << endl;
	cout << "PRESS 2 TO CONVERT METERS AND CENT TO FEET AND INCHES" << endl;
	cout << "PRESS 3 TO EXIT" << endl;
	cin >> c;
	if (c == 1){
		double feet;
		double in;
		cout << "ENTER FEETS THEN INCHES FOLLOWED BY A SPACE (FOR EXAMPLE : 5 3 MEANS 5 FEET AND 3 INCHES" << endl;
		cin >> feet >> in;
		f2m(feet, in);
	}
	else if (c == 2){
		double feet;
		double in;
		cout << "ENTER METERS THEN CENTIMETERS FOLLOWED BY A SPACE (FOR EXAMPLE : 5 3 MEANS 5 METERS AND 3 CENTIMETERS" << endl;
		cin >> feet >> in;
		m2f(feet, in);
	}
	else if (c == 3) {
		break;
	}
}
}


int main() {
		showChoices();
}
