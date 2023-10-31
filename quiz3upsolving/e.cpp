#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    int sum = 0; 
    for ( int i = 0; i < s.size(); i++){
        if ( s[i] >= '0' and s[i] <= '9'){
            sum += s[i] - 48 ; 
        }
    }
    cout << sum; 
}