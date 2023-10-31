#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
    cin >> n; 

    int arr[n][n]; 
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    } 
    
    int max = arr[0][0], x = 1, y = 1;

    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if ( (i == j) && arr[i][j] > max ){
            max = arr[i][j];
            x = i + 1;
            y = j + 1;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << x << ";" << y;

    return 0;
}