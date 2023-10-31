#include <iostream>
using namespace std; 

int order( int i , int n){
    if ( i > 0){
        cout << n + 1 - i << " "; 
        return order( i - 1 , n);
    }
    else return 0; 
}
int main (){
    int n; 
    cin >> n; 
    order( n, n); 
}