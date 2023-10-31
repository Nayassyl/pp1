#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    getline ( cin, s);
    int n;
    cin >> n;  
    
    map < char, int > m; 
    for ( int i = 0; i < n; i++ ){
        char x; 
        cin >> x; 
        m[x]++; 
    }
    map < char, int > :: iterator it; 
    for ( int i = 0; i < s.size(); i++){
        for ( it = m.begin(); it != m.end(); it++){
            if ( s[i] == (*it).first) (*it).second++; 
        }
    }
    for (it = m.begin(); it != m.end(); it++ ) {
        cout << (*it).first << " - " << (*it).second - 1 << endl; 
    }
}