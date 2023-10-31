#include <iostream> 

using namespace std;

int main()
    {
        int n, max, g = 0, c = 0;
            cin >> n;
        int arr[n][n]; 

        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                cin >> arr[i][k];
            }
        } 

        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                if ( max < arr[i][k]) {
                    max = arr[i][k];
                    g = i + 1;
                    c = k + 1;
                }
            }
        } 

        cout << g << " " << c;

        return 0;
    }