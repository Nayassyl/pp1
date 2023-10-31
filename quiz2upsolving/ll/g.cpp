#include <iostream>
#include <cmath>
using namespace std; 

int main (){
    int a, b, n; 
    cin >> a >> b >> n; 

    if ( n == 1 ){
        for ( int i = sqrt(a); i <= sqrt(b); i++){
            if( i * i >= a && i * i <= b){
                cout << i * i << " "; 
            }
        }
    }
    else{
       for ( int i = sqrt(b); i >= sqrt(a); i--){
            if( i * i >= a && i * i <= b){
                cout << i * i << " "; 
            }
        } 
    }
    
}