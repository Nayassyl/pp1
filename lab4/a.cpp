#include <iostream> 

using namespace std;

int main()
    {
        int n, max;
            cin >> n;
        int arr[n][n]; 

        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                cin >> arr[i][k];
            }
        } 

        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                if ( max < arr[i][k]) 
                    max = arr[i][k];
            }
        } 

        cout << max;

        return 0;
    }