#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int m;
	cin >> n >> m;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	// 배열 중 3개의 요소의 합만 이용해야함
	// 합이 m을 넘지 않는 제일 큰 수
	// 
	// c바꾸는 반복 1번
	// b바꾸는 반복 1번
	// a바꾸는 반복 1번
	// 총 3중 반복문
	int temp, sum = 0;
	for (int a = 0; a < n; a++)
	{
		for (int b = a + 1; b < n; b++)
		{
			for (int c = b + 1; c < n; c++)
			{
				temp = arr[a] + arr[b] + arr[c];
				if (temp <= m && sum <= temp)
				{
					sum = temp;
				}
			}
		}
	}
	cout << sum;
}