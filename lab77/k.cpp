#include <iostream>
using namespace std; 

int max( string s , int i, int maxi){
    if ( i == s.size()) return maxi; 
    if ( s[i] > maxi) maxi = s[i]; 
    return max( s, i + 1, maxi); 
    
}
int main (){
    string s; 
    cin >> s; 
    cout << max( s, 0, 0) - 48; 
}