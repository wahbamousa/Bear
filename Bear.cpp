
/*
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob. */

#include <iostream>
using namespace std;
int main()
{

	int limakA, bobB, xyears;
	cout << "enter the weight of every Bear \n" << "weight must be from 1 to 10 \n";

	cin >> limakA >> bobB;
	if (limakA > bobB)
	{
		cout << "limak is bigger than his brother" << endl;
	}
	else
	{
		for (xyears = 1; ; xyears++)

		{
			limakA *= 3 * xyears;
			bobB *= 2 * xyears;
			if (limakA > bobB)
			{
				cout << "after: \n" << xyears << ": years" << " \n limak is bigger than his brother \n";
				break;
			}
		}
	}

	return 0;
}