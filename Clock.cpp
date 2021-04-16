#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int mid = 12;
	cout << mid << " midnight" << endl;
	for (int i = 1; i <= 23; i++)
	{
		if (i<=11)
		{
			
			cout << i << "am" << endl;
		}
		if (i == 12) 
			cout << i << " noon" << endl;
		else if(i>=12) 
			cout << i - 12 << " pm" << endl;
	}
	return 0;
}