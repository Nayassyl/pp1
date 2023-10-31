#include <iostream>
using namespace std; 

bool isPalindrome ( string s, int i , int len){
    if ( i == len) return true; 
    if ( s[i] != s[len] ) return false; 
    return isPalindrome( s, i + 1 , len - 1); 
}

int main (){
    string s; 
    cin >> s; 
    if ( isPalindrome( s, 0, s.size() - 1)) cout << "Yes"; 
    else cout << "No"; 
}