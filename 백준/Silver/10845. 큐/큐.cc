#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;

	int arr[10000] = { 0, };
	int index = 0, count = 0, head = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> arr[index++];
		}
		else if (s == "pop")
		{
			if (head == index)
				cout << -1 << "\n";
			else
				cout << arr[head++] << "\n";
		}
		else if (s == "size")
		{
			count = 0;
			for (int i = head; i < index; i++)
			{
				if (arr[i] != 0)
					count++;
			}
			cout << count << "\n";
		}
		else if (s == "empty")
		{
			if (head == index)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front")
		{
			if (head == index)
				cout << -1 << "\n";
			else
				cout << arr[head] << "\n";
		}
		else if (s == "back")
		{
			if (head == index)
				cout << -1 << "\n";
			else
				cout << arr[index - 1] << "\n";
		}
	}
}