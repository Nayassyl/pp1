#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= 2 * a - 1; j++)
		{
			if (j >= a - (i - 1) && j <= a + (i - 1))
			{
				cout << "*";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
	}
}