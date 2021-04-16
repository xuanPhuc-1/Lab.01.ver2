#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a * b < 0) cout << (abs(a + b) + abs(a - b)) / 2;
	else cout << ((a + b) + abs(a - b)) / 2;
	return 0;
}