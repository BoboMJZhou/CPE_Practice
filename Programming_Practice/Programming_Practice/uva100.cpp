#include <iostream>
using namespace std;

int MaxCycleLength(int i)
{
	int len = 1;
	while (i != 1)
	{
		if (i % 2 == 0)
			i = i / 2;
		else
			i = 3 * i + 1;
		len++;
	}
	return len;
}

int main() {

	int i, j;
	while (cin >> i) {
		cin >> j;
		cout << i << " " << j << " ";
		int maxLength = 0;
		if (i > j)
		{
			int t = i;
			i = j;
			j = t;
		}
		for (int a = i; a <= j; a++)
		{
			int temp = MaxCycleLength(a);
			if (temp > maxLength)
			{
				maxLength = temp;
			}
		}
		cout << maxLength << endl;
	}

	return 0;
}