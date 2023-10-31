#include <iostream> 

using namespace std;

int main()
    {
        int n, k = 1; 
        cin >> n;
        int arr[n][n]; 

        for ( int i = 0; i < n; i++){
            for ( int j = 0; j < n; j++){
                arr[i][j] = 0;
                }
            }
        

        for ( int i = 0; i < n; i++){
            for ( int j = 0; j < n; j++){
                if ( (i + j) == (n - 1)){
                    arr[i][j] = k;
                    k++;
                }
                
            }
        }

        for ( int i = 0; i < n; i++){
            for ( int j = 0; j < n; j++){
                if ( arr [i][j] == 0)
                cout << ".";
                else 
                cout << arr [i][j];
            }
            cout << endl;
        }
        return 0;
    }