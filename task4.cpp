#include <iostream>
#include <cmath>
#define PI 3.1416
using namespace std;
double form(int x, int y, int x1, int x2){
	return (sqrt((x-x1) * (x-x1) + (y - y1) * (y - y1));
}
double radius(int x, int y, int x1, int y1) {
	return form(x, y, x1, y1);
}

double circum(int r){
	return 2 * PI * r;
}
double area(int r) {
	return PI * r * r;
}
int main() {
	return 0;
}
