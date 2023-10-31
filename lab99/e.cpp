#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    map< string, int > m; 
    for ( int i = 0; i < n; i++){
        string str; 
        cin >> str; 
        m[str]++; 
    }
    int cnt = 0; 
    map < string, int > :: iterator it; 
    for( it = m.begin(); it != m.end(); it++){
        if ( (*it).second == 3 ) cnt++; 
    }
    cout << cnt; 
}