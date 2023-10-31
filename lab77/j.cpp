#include <iostream>
using namespace std; 

int divi( string s, int sum, int i ){
    if ( i == s.size()) return sum; 
    return divi( s, sum + (s[i] - 48) / 2, i + 1 );
}
int main(){
    string s; 
    cin >> s; 

    cout << divi( s, 0, 0); 
}