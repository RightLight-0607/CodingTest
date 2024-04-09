#include <iostream>
#include <stack>

using namespace std;

int main()
{
	char a[100];
	bool equel;
	stack<char> arr;
	while (true)
	{
		equel = true;
		cin.getline(a, 100, '.');
		cin.ignore();
		int i;
		if (a[0] == '\0')
			break;
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '(' || a[i] == '[')
			{
				arr.push(a[i]);
			}
			else if (a[i] == ')')
			{
				if (arr.empty() || arr.top() != '(')
				{
					equel = false;
					break;
				}
				else
				{
					arr.pop();
				}
			}
			else if (a[i] == ']')
			{
				if (arr.empty() || arr.top() != '[')
				{
					equel = false;
					break;
				}
				else
				{
					arr.pop();
				}
			}
		}
		if (equel && arr.empty())
			printf("yes\n");
		else
			printf("no\n");

		while (!arr.empty())
			arr.pop();
	}
}