#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;

	if (x + y + z == 180)
	{
		if (x == y && x == z)
			cout << "Equilateral";

		else if (x == y || x == z || y == z)
			cout << "Isosceles";

		else
			cout << "Scalene";
	}
	else
		cout << "Error";
}