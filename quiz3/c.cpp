#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std; 

int gcd( int a, int b){
    int c = 1; 
    int m = 2; 
            while( a >= m and b >= m){
                if ( a % m == 0 and b % m == 0){
                    a /= m; 
                    b /= m;
                    c *= m;  
                }
                else{
                    m++; 
                }
            }
            return c; 
        
}

int main(){
    int n; 
    cin >> n; 
    int arr[n];
    for ( int i = 0; i < n; i++){
        cin >> arr[i];  
    } 
    int ans = 0; 
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if ( arr[i] != arr[j]){
                ans = max (ans,  gcd ( arr[i], arr[j])) ; 
            }
        }
    
    }
    cout << ans; 
}