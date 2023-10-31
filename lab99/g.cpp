#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    for ( int i = 0; i < s.size() - 1; i++){
        if ( s[i] == '1' and s[ i + 1 ] == '1')
        s.erase( i, 2); 
    }
    cout << s; 
}