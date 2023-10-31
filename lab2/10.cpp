#include <iostream> 
using namespace std;
int main(){
   int n , sumzero = 0 , num ; 
   cin >> n;
   int arr[n] ;
   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   for ( int i = 0 ; i < n ; i++) 
   { 
     int num = arr[i] ; 
      while (num > 9){
        if (num % 10 == 0) 
        {
         sumzero++ ;
        }
        num = num / 10 ;
    }
   }
   cout << sumzero ; 
   return 0 ;  
}