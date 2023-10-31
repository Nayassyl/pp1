#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
   int n , k = 0 ; 
   cin >> n; 
   for (pow( 2, k ) ; pow( 2, k ) <= n ; k++) {
    cout << pow( 2 , k ) << " ";
   }
   return 0 ;  
}