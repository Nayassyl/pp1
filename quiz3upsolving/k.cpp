#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    string str = ""; 
    long long bin = 0; 
    for ( int i = 0; i < s.size(); i++){
        str = s[i] + str; 
    }
    for ( int i = 0; i < str.size(); i++){
        if ( (str[i] - 48) == 1 ){
            bin += (str[i] - 48) * pow ( 2, i);
    }
    }
    cout << bin; 

}