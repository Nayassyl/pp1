#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    getline ( cin, s ); 
    for( int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' and s[i] < 'z') or (s[i] >= 'A' and s[i] < 'Z'))
        cout << char(s[i] + 1); 
        else if ( s[i] == 'z') cout << "a"; 
        else if ( s[i] == 'Z') cout << "A"; 
        else cout << s[i]; 
    }
}