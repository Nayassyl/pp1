#include <iostream>
using namespace std; 

int befzero( string s, int i, int sum){
    if ( i == s.size ()) return sum; 
    if ( s[i] >= 48 && s[i] <= 58 ) return befzero( s, i + 1 , sum + s[i] - 48);
    return ( s, i + 1, sum); 
}

int main (){
    string s; 
    getline( cin , s);  
    cout << befzero ( s, 0, 0); 
}