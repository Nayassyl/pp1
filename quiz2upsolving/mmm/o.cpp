#include <iostream>
using namespace std; 

int main(){
    int a, b; 
    cin >> a >> b; 

    int arr[a][b]; 
    for ( int i = 0; i < a; i++){
        for( int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
    }
    for ( int i = 0; i < a; i++){
    int sum = 0; 
        for( int j = 0; j < b; j++){
            sum += arr[i][j]; 
        }
        cout << sum / b << " "; 
    }
    cout << endl; 
}


