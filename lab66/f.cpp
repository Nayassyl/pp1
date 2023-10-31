#include <iostream>
using namespace std; 

bool f( string s , int n){
    for (int i = 0; i < s.size(); i++){
        if( s[i] >= '0' && s[i] <= '9'){
            n--; 
            if( n == 0 ) return true; 
        }
    }
     return false; 
}
int main (){
    string str; 
    cin >> str; 
    int n; 
    cin >> n; 

    if ( f(str, n)) cout << "YES"; 
    else cout << "NO"; 
}