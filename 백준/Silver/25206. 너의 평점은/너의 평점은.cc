#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string name;
	string grade_s;
	float grade_f;
	float score;
	double sum = 0;
	int n = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> name && cin >> score && cin >> grade_s;

		if (grade_s != "P")
		{
			if (grade_s == "A+")
				grade_f = 4.5;
			else if (grade_s == "A0")
				grade_f = 4.0;
			else if (grade_s == "B+")
				grade_f = 3.5;
			else if (grade_s == "B0")
				grade_f = 3.0;
			else if (grade_s == "C+")
				grade_f = 2.5;
			else if (grade_s == "C0")
				grade_f = 2.0;
			else if (grade_s == "D+")
				grade_f = 1.5;
			else if (grade_s == "D0")
				grade_f = 1.0;
			else
				grade_f = 0.0;

			n += score;
			sum += score * grade_f;
		}
	}
	cout << sum / n;
}