#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 2;
	while (i <= n)
	{
		// n을 i로 나눴을 때 나머지가 없다면
		// i를 출력하고 n을 나눈 몫으로 덮어씌운다
		// n을 i로 나눴을 때 나머지가 있다면
		// i를 증가하고 다시 반복시킨다
		if (n % i == 0)
		{
			n = n / i;
			cout << i << "\n";
		}
		else
			i++;
	}
}