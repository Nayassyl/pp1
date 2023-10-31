#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    
    int a[n]; 
    int b[n]; 
    for ( int i = 0; i < n; i++){
        cin >> a[i];  
    }
    for ( int j = 0; j < n; j++){
        cin >> b[j];  
    }

    int t; 
    cin >> t; 

    int cnt = 0; 

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if ( i == j && a[i] <= t && b[j] >= t) cnt++; 
        }
    }
     cout << cnt; 
    return 0; 
}