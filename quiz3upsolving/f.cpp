#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    for ( int i = 0; i < s.size(); i++){
        if ( (s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= '0' and s[i] <= '9' )) continue; 
        else cout << s[i]; 
    }
}