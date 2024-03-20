#include<iostream>
#include<queue>

using namespace std;

int main()
{	
	priority_queue<int,vector<int>, greater<int>> arr;
	int n;
	scanf("%d", &n);
	int data;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		if (data == 0)
		{
			if (arr.size() == 0)
			{
				printf("0\n");
			}
			else
			{
				printf("%d\n", arr.top());
				arr.pop();
			}
		}
		else
		{
			arr.push(data);
		}
	}
}
