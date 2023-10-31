#include <iostream> 
using namespace std;
int main(){
   int n , sumzero = 0 ;
   int arr[ 1000 ]; 
   cin >> n;
   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   for ( int i = 0 ; i < n ; i++) 
   { 
     while (arr[i] % 10 == 0 && arr[i] > 9){
        arr[i] = arr[i] / 10 ; 
        sumzero++ ;
    }
   }
   cout << sumzero ; 
   return 0 ;  
}