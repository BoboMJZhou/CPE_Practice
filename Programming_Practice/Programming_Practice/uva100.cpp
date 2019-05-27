
#include <iostream>
using namespace std;

int FindCycleLength(int x)
{
	int length = 1;
	if (x == 1)
	{
		return 1;
	}
	else if (x % 2 == 0)
	{
		return length + FindCycleLength(x / 2);
	}
	else
	{
		return length + FindCycleLength( x * 3 + 1);
	}
}

int main()
{
	int i, j;
	while (cin >> i >> j)
	{
		if (i > j)
		{
			int t = i;
			i = j;
			j = t;
		}
		int max_cycle = 0;
		for (int x = i; x <= j; x++)
		{
			int temp_cycle = FindCycleLength(x);
			if (max_cycle < temp_cycle)
				max_cycle = temp_cycle;
		}
		cout << i << " " << j << " " << max_cycle << endl;
	}
	return 0;
}