#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3, greater<int>());

	if (arr[0] < arr[1] + arr[2])
	{
		cout << arr[0] + arr[1] + arr[2];
	}
	else
		cout << 2 * (arr[1] + arr[2]) - 1;
}