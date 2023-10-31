#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n , k;
    cin >> n >> k; 
    map < int, int > m; 
    for( int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        m[x]++; 
    }
    bool isValid = false; 
    int a; 
    map < int , int > :: iterator it; 
    for ( it = m.begin(); it != m.end(); it++){
        if ( (*it).first == k) {
            a = (*it).second; 
            isValid = true; 
            break; 
    }
}
    if(isValid) cout << a; 
    else cout << '0'; 
}