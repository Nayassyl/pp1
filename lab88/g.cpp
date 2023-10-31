#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std; 

bool isPrime( int a){ 
    if ( a == 0 or a == 1) return false; 
    else for( int i = 2; i <= sqrt(a); i++) if( a % i == 0) return false; 
    return true; 
}

int main(){
    int n; 
    cin >> n; 
    vector<int> v; 
    for ( int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        v.push_back(x); 
    }
    int k; 
    cin >> k; 
    int sum = 0; 
    for( int i = 0; i < v.size();i++){
        if( v[i] >= k && isPrime(v[i])){
           sum++; 
        }
    }
    cout << sum; 
}