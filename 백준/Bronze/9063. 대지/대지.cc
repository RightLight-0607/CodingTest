#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x, y;
	int big_X = -10000, big_Y = -10000, small_X = 10000, small_Y = 10000;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x > big_X)
			big_X = x;

		if (x < small_X)
			small_X = x;

		if (y > big_Y)
			big_Y = y;

		if (y < small_Y)
			small_Y = y;
	}

	if (n == 1)
	{
		cout << 0;
		return 0;
	}

	cout << (big_X - small_X) * (big_Y - small_Y);

}