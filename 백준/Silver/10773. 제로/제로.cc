#include<iostream>

using namespace std;

int main()
{
	int k, n;
	cin >> k;
	int* arr = new int[k];
	int index = 0;
	for (int i = 0; i < k; i++)
	{
		cin >> n;

		if (n == 0)
		{
			index--;
			arr[index] = 0;
		}
		else
		{
			arr[index] = n;
			index++;
		}
	}
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
		if (arr[i] == 0)
			break;
	}
	cout << sum;
}