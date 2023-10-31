#include <iostream> 
using namespace std;
int main(){
   int n, k, a, t ;
   a = 1 ;
   cin >> n >> k ; 
   t = (2 * n)/k + a ; 
   if ( n <= k) 
   cout << 2 ;
   else if ( (2 * n) % k == 0)
   cout << ((2 * n) / k) ;
   else
   cout << t ;
   return 0 ; 
       
}