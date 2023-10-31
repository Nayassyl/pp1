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

    for (int i = 0; i < n; i++){
        for ( int j = n - 1; j >= 0; j--){
            if ( i + j == n - 1)
            sum = sum + arr[i][j];
            continue;
        }
    }
    cout << sum; 

    return 0;
}