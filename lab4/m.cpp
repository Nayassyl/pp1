#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a; /*a Size of the array*/
	int array[a][a];
	int l = a, k = 1, p = 0, i; /*k is to assign the values to the array from 1...a*a */
										 /*l is used to update(decrease) array size so that values cans be assign to them */
	while (k <= a * a)
	{
		for (i = p; i < l; i++) /*Loop to access the first row of the array*/
		{
			array[p][i] = k++;
		}
		for (i = p + 1; i < l; i++) /*Loop tp access the last column of the array*/
		{
			array[i][l - 1] = k++;
		}
		for (i = l - 2; i >= p; i--) /*Loop to access the last row of the array*/
		{
			array[l - 1][i] = k++;
		}
		for (i = l - 2; i > p; i--) /*Loop to access the first column of the array*/
		{
			array[i][p] = k++;
		}
		p++, l = l - 1;
	}
	if (!a % 2) /*This block will run only if a is even*/
	{
		array[(a + 1) / 2][(a + 1) / 2] = a * a; /*It will assign the last value to the centremost element*/
	}
	for (i = 0; i < a; i++) /*This loop will print the array in matrix format*/
	{
		for (int j = 0; j < a; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}