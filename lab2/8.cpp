#include <iostream> 
using namespace std;
int main(){
   int n , sum = 0 ;
   int arr[ 1000 ]; 
   cin >> n;

   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   for ( int i = 0 ; i < n ; i++) 
   {
      if ( arr[i] % 10 == 7 ) 
      
      sum++ ; 
   }
   cout << sum ;
   return 0 ;  
}