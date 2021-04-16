#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int year;
	while (true)
	{
		cin >> year;
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
				cout << year << " is a common year";
			if (year % 100 == 0 && year % 400 == 0)
				cout << year << " is leap year";
			else
				cout << year << " is a common year";
		}
	}
	return 0;
}