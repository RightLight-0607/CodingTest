#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int point[2][2] = { 0, };
	int x, y;

	for (int i = 0; i < 3; i++)
		cin >> point[i][0] >> point[i][1];

	if (point[0][0] == point[1][0])
		x = point[2][0];
	else if (point[0][0] == point[2][0])
		x = point[1][0];
	else
		x = point[0][0];

	if (point[0][1] == point[1][1])
		y = point[2][1];
	else if (point[0][1] == point[2][1])
		y = point[1][1];
	else
		y = point[0][1];

	cout << x << " " << y;

}