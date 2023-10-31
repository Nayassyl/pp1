#include <iostream>
using namespace std; 

string vowel( string s){
    string str = ""; 
    for ( int i = 0; i < s.size(); i++){
    if ( s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'O' && s[i] != 'I' && s[i] != 'U' ) {
        str = str + s[i]; 
    }
    }
    return str; 
}

int main (){
    string s; 
    getline( cin , s); 
    cout << vowel(s); 
}