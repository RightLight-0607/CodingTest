#include <iostream>

using namespace std;

int main(void)
{
	int data = 1;
	int i = 1;
	int n;
	cin >> n;
	while (data < n)
	{	
		data += 6 * i++;
	}
	cout << i;
}