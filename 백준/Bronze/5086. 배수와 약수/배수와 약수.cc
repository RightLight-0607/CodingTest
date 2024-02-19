#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a > b && a % b == 0)
			cout << "multiple" << "\n";

		else if (a < b && b % a == 0)
			cout << "factor" << "\n";

		else if (a == 0 && b == 0)
			break;

		else
			cout << "neither" << "\n";
	}
}