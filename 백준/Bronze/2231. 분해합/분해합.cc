#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int temp = n;
	int a = 0; // 자릿수 판별
	int sum; // 각 자릿수의 합
	while (temp > 0)
	{
		temp /= 10;
		a++;
	}
	int temp2;
	int ans = 0;
	for (int i = n; i >= n - (a * 9); i--)
	{
		sum = 0;
		temp = i;

		for (int k = a; k > 0; k--)
		{
			temp2 = temp / pow(10, k - 1);
			temp -= temp2 * pow(10, k - 1);
			sum += temp2;
		}
		if (sum + i == n)
			ans = i;
	}
	cout << ans;

}