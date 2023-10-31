#include <iostream>

using namespace std; 

int equals(int a[], int b[], int n){
    int cnt = 0; 
    int m = n; 
    for( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if ( a[i] == b[j] ){
                b[j] = b[ m - 1 ]; 
                m--;
                cnt++; 
                break; 
            }
        }
    }
    return cnt; 

}

int main(){
    int n; 
    cin >> n; 
    int a[n] , b[n];

    for( int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    for( int i = 0; i < n; i++){
        cin >> b[i]; 
    } 

    cout << equals( a, b, n);

}