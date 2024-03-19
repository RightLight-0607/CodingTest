#include<iostream>

using namespace std;

int main()
{
	int arr[10000];
	int index = 0;
	int num;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			cin >> num;
			arr[index++] = num;
		}
		else if (s == "pop")
		{
			if (index == 0)
				cout << -1 << "\n";
			else
			{
				cout << arr[index - 1] << "\n";
				arr[index - 1] = 0;
				index--;
			}
		}
		else if (s == "size")
		{
			cout << index << "\n";
		}
		else if (s == "empty")
		{
			if (index == 0)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "top")
		{
			if (index == 0)
				cout << -1 << "\n";
			else
				cout << arr[index - 1] << "\n";
		}
	}
}
