#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    getline ( cin , s); 
    string str = ""; 
    bool iss = 0; 
    for ( int i = 0; i < s.size(); i++){
        if ( s[i] == ' '){
            if( iss == 0) cout << str << endl; 
            iss = 0; 
            str = ""; 
        }
        else{
            str += s[i]; 
            if ( s[i] >= '0' and s[i] <= '9') iss = 1;  
        }

    } 
    if( iss == 0 ) cout << str << endl; 
}