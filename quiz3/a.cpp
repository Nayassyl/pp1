#include <iostream>
using namespace std; 

int main(){
    string t; 
    cin >> t; 

    string s;
    cin >> s; 

    string str = ""; 

    for( int i = 0; i < s.size(); i++){
        if( s[i] != t[0] )
        str = str + s[i]; 
    }

    cout << str; 
}