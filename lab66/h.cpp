#include <iostream>
using namespace std; 

 bool isValid( string s){
    for ( int i = 0; i < s.size(); i++){
        if( s[i] % 2 != 0)
        return false; 
    }
    return true; 
 }

 int main(){
    string s; 
    cin >> s; 

    if(isValid(s)) cout << "Valid"; 
    else cout << "Not valid"; 
 }