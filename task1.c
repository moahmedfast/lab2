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
double business(int channel, connect){
	double bpf = 4.50;
	double bsf =(connect < 10) ? :;
	double pc = channel * 7.50;
	return bpf + bsf + pc;
}


int main() {
	
}
