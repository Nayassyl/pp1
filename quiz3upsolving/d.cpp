#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    string s = ""; 
    while( n != 0){
        if ( n % 16 >= 0 and n % 16 <= 9){
            s += ( n % 16 + 48);
        }
        else if ( n % 16 > 9){
            s += ( n % 16 + 55); 
        }
        n /= 16; 
    }
    for ( int i = s.size() - 1; i >= 0; i--){
        cout << s[i]; 
    } 
}