#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int minX = x;
	int minY = y;

	if (w - x < x)
		minX = w - x;

	if (h - y < y)
		minY = h - y;

	if (minY > minX)
		cout << minX;
	else
		cout << minY;

}