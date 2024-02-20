#include <iostream>

using namespace std;

int main(void)
{
	int x;
	int data = 1; // 각 열의 최대치
	int i = 1; // 열 번호
	int y = 2; // 공차 (공차는 1회 반복시마다 1씩 증가해야함)
	int sum = 2;
	cin >> x;
	// 해당 열에서의 분자 & 분모의 합도 알아야함
	while (data < x)
	{
		data += y++;
		i++;
		sum++;
	}
	int n, m; // 분자 & 분모
	// 이때의 data는 x가 해당되는 열의 최대치
	// 만약 x가 5라면 data는 6이기 때문에 1칸만 이동한다
	// 최대치에서 출발하기 때문에 count만큼 뒤로 가야함
	int count = data - x;
	// 짝수열일때 분자 증가 분모 감소
	// 홀수열일때 분자 감소 분모 증가
	if (i % 2 == 0)
	{
		n = sum - 1;
		m = 1;
		for (int i = 0; i < count; i++)
		{
			n--;
			m++;
		}
	}
	else
	{
		n = 1;
		m = sum - 1;
		for (int i = 0; i < count; i++)
		{
			n++;
			m--;
		}
	}
	cout << n << "/" << m << "\n";
}