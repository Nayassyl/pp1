#include <iostream>

using namespace std; 

int main ()
{
    int n, m;
    cin >> n >> m; 

    int arr[n][m];
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    } 

    cout << "coordinates of min elements:" << endl;


    int x = 1, y = 1, min = arr[0][0];
	long long sum = 0;
	for (int j = 0; j < m; j++)
	{
		min = arr[0][j];
		for (int i = 0; i < n; i++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
		cout << x << ";" << y << endl;
		sum = sum + min;
	}
	cout << endl << "Their sum:" << endl << sum;
}