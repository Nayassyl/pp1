#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    long long n; 
    cin >> n; 
    if ( n >= 0 && n <= 9){
        cout << "NO";  
    }
    else {
    int sum = 0; 
    int cnt = 0; 
    while ( n > 10 ){
        sum += n % 10; 
        n /= 10; 
        cnt++; 
    }
    long long k = pow ( 10, cnt ); 
    if ( sum % 10 == n % k) cout << "YES"; 
    else cout << "NO"; 
    }
    
     
    
}