#include <bits/stdc++.h>
using namespace  std; 
int main(){
    string s, str; 
    char s1;  
    cin >> s >> str >> s1; 
    for ( int i = 0; i < s.size(); i++){
        for( int j = 0; j < str.size(); j++){
            if ( s[i] == str[j]) s[i] = s1; continue; 
        }
    }
    cout << s; 
}