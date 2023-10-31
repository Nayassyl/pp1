#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    int arr[10]; 
    for ( int i = 0; i < 10; i++){
        arr[i] = 0; 
    }

    while ( n != 0 ){
        for ( int i = 0; i < 10; i++){
            if ( n % 10 == i){
                arr[i] ++; 
            }
        }
        n /= 10; 
    }
    for ( int i = 9; i >= 0; i--){
        if ( arr[i] != 0 ) {
            cout << i << " "; 
            break; 
        }
    }
    for ( int i = 0; i < 10; i++){
        if ( arr[i] != 0){
            cout << i; 
            break; 
        }
    }
}