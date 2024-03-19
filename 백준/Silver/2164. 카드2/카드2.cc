#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	queue<int> q;

	for (int i = 0; i < n; i++)
		q.push(i + 1);

	int count = 1;
	while (q.size() > 1)
	{
		if (count % 2 == 1)
		{
			q.pop();
			count++;
		}
		else
		{
			q.push(q.front());
			q.pop();
			count++;
		}
	}
	cout << q.front();
}