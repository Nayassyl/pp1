#include <iostream> 
#include <cmath>
using namespace std;
int main(){
   int n , sumpos = 0 ;
   cin >> n;
   int arr[n] ;
   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   for ( int i = 0 ; i < n ; i++) 
   {
      if ( arr[i] > 0 ) 
      sumpos++ ; 
   }
   cout << sumpos ; 
   return 0 ; 
       
}