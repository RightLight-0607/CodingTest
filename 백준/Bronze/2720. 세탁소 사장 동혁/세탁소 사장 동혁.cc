#include <iostream>

using namespace std;

int main(void)
{
	int t, c, temp;
	cin >> t;
	int p[4] = { 25,10,5,1 };

	for (int i = 0; i < t; i++)
	{
		cin >> c;
		temp = c;
		for (int j = 0; j < 4; j++)
		{
			cout << temp / p[j] << " ";
			temp = temp % p[j];
		}
	}
}