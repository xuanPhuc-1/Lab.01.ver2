#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x, y, z;
	bool b ;
	while (true)
	{
		cin >> x >> y >> z;
		if (x >= y && y <= z) b = false;
		else if (x <= y && y >= z) b = false;
		else b = true;
		cout << b << endl;
	}
	return 0;
}