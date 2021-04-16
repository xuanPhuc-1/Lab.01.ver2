#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double w, h;
	cin >> w >> h;
	cout << "BMI = " << w / pow(h, 2);
	return 0;
}