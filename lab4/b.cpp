#include <iostream> 

using namespace std;

int main()
    {
        int n, max, max2, l;
        l = 0;
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
         
        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                if ( arr [0][0] != arr[i][k]){
                l = 1;
                
                }
            }
        } 
        if( l == 0 )
            cout << 0; 
        
        else {

        for ( int i = 0; i < n; i++){
            for ( int k = 0; k < n; k++){
                if ( max == arr[i][k])
                    continue;
                else if ( max2 < arr[i][k]) 
                    max2 = arr[i][k];
            }
        } 
        cout << max2;
        }
        
        return 0;
    }