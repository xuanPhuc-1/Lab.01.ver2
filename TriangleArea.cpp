#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b, c, d;
	bool check = true;
	cin >> a >> b >> c;
	if (a + b > c || a + c > b || c + b > a) check = false;
	while (check) 
		{
			cout << "Input again a, b, c: ";
			cin >> a >> b >> c;
		}
		d = (a + b + c) / 2;
		cout << double(sqrt(d * (d - a) * (d - b) * (d - c))) << endl;
	return 0;
}