#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, z;
	int arr[3];
	int longest;
	while (true)
	{
		cin >> arr[0] >> arr[1] >> arr[2];

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;

		sort(arr, arr + 3, greater<int>());

		if (arr[0] < arr[1] + arr[2])
		{
			if (arr[0] == arr[1] && arr[0] == arr[2])
				cout << "Equilateral" << "\n";

			else if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
				cout << "Isosceles" << "\n";

			else
				cout << "Scalene" << "\n";
		}
		else
			cout << "Invalid" << "\n";
	}
}