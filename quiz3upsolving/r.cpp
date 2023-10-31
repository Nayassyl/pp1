#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    char t; 
    cin >> t; 
    int cnt = 0; 
    int ind = 0; 
    for ( int i = 0; i < s.size(); i++){
        if(s[i] == t)
        cnt++; 
    }
    if ( cnt == 1){
        for ( int i = 0; i < s.size(); i++){
        if(s[i] == t){
            cout << i; 
        }
    }
    }
    else {
        for ( int i = 0; i < s.size(); i++){
        if(s[i] == t){
            cout << i;
            break; 
        }
    }
    for ( int i = 0; i < s.size(); i++){
        if(s[i] == t){
            ind = i;
        }
    }
    cout <<" " <<  ind; 
}
}