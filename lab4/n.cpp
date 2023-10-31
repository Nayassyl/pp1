#include <iostream>
using namespace std;

int main()
{
	int n, i, j, z = 0;
	cin >> n;

	for (int j = 2; j <= n; j++)
	{
		z = 0;
		for (i = 2; i <= j; i++)
		{
			if (j % i == 0)
			{
				z++;
			}
		}
		if (z == 1)
		{
			cout << j << " is prime" << endl;
		}
	}

	return 0;
}