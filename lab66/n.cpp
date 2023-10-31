#include <iostream>

using namespace std; 

bool isValid( string s){
    int sum = 0; 
    int last = s.size() - 1; 
    for ( int i = 0; i < s.size(); i++){
        sum += s[i] - 48; 
    }
    if ( sum % (s[last] - 48) == 0) return true; 
    else return false; 
}
int main (){
    string s; 
    cin >> s; 
    if(isValid(s)) cout << "Yes"; 
    else cout << "No"; 
}