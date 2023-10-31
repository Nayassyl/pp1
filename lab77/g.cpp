#include <iostream> 
using namespace std; 

int factorial( int n , int fac) {
    if ( n == 0 ) return 1; 
    if ( n == 1 ) return fac; 
    return factorial( n - 1 , fac * n); 
    
}
int main(){
    int n; 
    cin >> n; 
    cout << factorial( n, 1); 
}