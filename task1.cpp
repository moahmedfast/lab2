#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

double residential(int channel){
	double bpf = 4.50;
	double bsf = 20.50;
	double pc = channel * 7.50;
	return bpf + bsf + pc;
}
double business(int connect){
	double bpf = 4.50;
	double bsf =(connect < 10) ? 75:75 + (connect - 10) * 5;
	double pc = 50;
	return bpf + bsf + pc;
}


int main() {
	int acc;
	char code;
	int connect;
	int channel;
	cout << "ENTER CUSTOMER NUMBER:"<<endl;
	cin >> acc;
	cout << "ENTER CUSTOMER CODE : " << endl;
	cin >> code;
	if (code == 'B' || code == 'b') {
		cout << "ENTER NUMBER OF CONNECTIONS : ";
		cin >> connect;
		
		cout << "YOUR CUSTOMER NUMBER : " << acc << "\nAMOUNT DUE : " << business(connect);
	}
	else if (code == 'R' || code == 'r') {
		cout << "ENTER NUMBER OF CHANNELS : ";
		cin >> channel;
		
		cout << "YOUR CUSTOMER NUMBER : " << acc << "\nAMOUNT DUE : " << residential(channel);
	}
}
