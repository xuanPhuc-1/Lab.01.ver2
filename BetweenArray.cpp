#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int arr[MAX+1], temp;
	for (int i = 0; i < MAX; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < MAX-1; i++)
	{
		for (int j = i + 1; j < MAX ; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << arr[2];
	return 0;
}