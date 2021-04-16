#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x, y;
	bool b;
	while (true)
	{
		cin >> x >> y;
		if (x % 7 == 0 && y % 7 == 0) b = true;
		else b = false;
		cout << b << endl;
	}
	return 0;
}