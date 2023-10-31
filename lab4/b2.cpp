#include <iostream>

using namespace std;

#include <algorithm>

int main()
{
    int n, i, k;
    cin >> n;

    int arr[n][n];
    
    for ( int i =0; i < n; i++){
        for ( int k = 0; k < n; k++){
            cin >> arr[i][k];
        }
    }
    
    cout << arr[i][k];
}