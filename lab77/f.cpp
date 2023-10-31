#include <iostream> 
using namespace std;

int sumEven ( string s, int i , int sumeven){
    if ( i == s.size()) return sumeven; 
    if ( s[i] % 2 == 0 ) return sumEven( s, i + 1 , sumeven + 1); 
    return sumEven( s, i + 1, sumeven); 
}

int main (){
    string s; 
    cin >> s; 
    cout << sumEven ( s, 0, 0); 
}