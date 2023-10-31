#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    int cnt = 0; 
    for ( int j = 0; j < s.size() - 1; j++){
        for( int i = 0; i < s.size() ; i++){
        if ( s[i] == '(' and s[i + 1] == ')'){
            s.erase( i , 2);
            s += "..";
            cnt += 2; 
            break; 
        }
    }
    }
    if( cnt == s.size()) cout << "YES"; 
    else cout << "NO";  
}