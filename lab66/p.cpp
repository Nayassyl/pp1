#include <iostream>

using namespace std; 

int rev( int n){
    if ( n < 0 ){
        n = n + (-2 * n); 
    }
    return n; 
}
int main (){
    int n; 
    cin >> n; 
    cout << rev(n); 
}