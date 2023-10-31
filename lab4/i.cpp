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
    
    int max = 0; 
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if ( arr [i][j] > max ) 
            max = arr[i][j];
        }
    }  
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            for ( long long k = 0; k <= max; k++){
                if (k*k == arr[i][j]){
                    arr[i][j] = k; 
                }
            }
        }
    } 
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            cout << arr [i][j] << " "; 
        }
        cout << endl; 
    }

}