#include <iostream> 

using namespace std; 

int pow( int k ){
    if ( k == 0 ) return 1;
    if ( k == 1 ) return 2; 

    return pow ( k - 1 ) * 2; 
}

int main(){
    int a; 
    cin >> a; 
    cout << pow (a); 
}