#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    double a, b; 
    cin >> a >> b; 
    bool isDouble = false; 
    int k = 0; 
    for ( int i = -60; i <= 60; i++){
        if (  a * pow ( 2 , i ) == b){
            cout << "YES" << " " << i; 
            isDouble = true; 
            break;  
        }
    }
    if ( isDouble == false ) cout << "NO"; 
}