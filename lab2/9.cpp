#include <iostream> 
using namespace std;
int main(){
   int n , sumeven = 0 , sumodd = 0;
   int arr[ 1000 ]; 
   cin >> n;

   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   for ( int i = 0 ; i < n ; i++) 
   {
      if ( arr[i] % 2 == 0 ) 
      sumeven++ ; 
      else 
      sumodd++ ; 
   }
   cout << sumeven << " " << sumodd ; 
   return 0 ;  
}