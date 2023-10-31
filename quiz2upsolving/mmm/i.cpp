#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    
    int arr[n][n]; 
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> arr[i][j]; 
        }
    }

    int arr2[n]; 
    for ( int i = 0; i < n; i++){
        arr2[i] = 0; 
    }

    for ( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            if( arr[i][j] > arr2[i]){
                arr2[i] = arr[i][j]; 
            }
        }
    } 

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            cout << arr2[i] << " "; 
        }
        cout << endl; 
    }
}