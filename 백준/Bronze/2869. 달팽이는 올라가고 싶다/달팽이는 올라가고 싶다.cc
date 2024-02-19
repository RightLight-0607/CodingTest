#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int x = (v - b) / (a - b);
	if ((float)((v - b) % (a - b)) != 0)
		x++;
	cout << x;
}