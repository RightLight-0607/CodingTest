#include <iostream>

using namespace std;

int main()
{
	int n, x, j;
	int factor = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x > 1)
		{
			j = 1;
			factor = 0;
			while (x >= j)
			{
				if (x % j == 0)
					factor++;

				j++;
			}
			if (factor < 3)
				count++;
		}
	}
	cout << count;
}