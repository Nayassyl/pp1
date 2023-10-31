#include <iostream> 

#include <cmath>

using namespace std;

int main(){
   int n, l, k;
   long long sumpos = 0 ;
   cin >> n >> l >> k; 
   int arr[n] ;
   for ( int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   
   for ( int i = l-1 ;  i <= k-1; i++) 
   {
      sumpos = sumpos + arr[i];
   }
   cout << sumpos; 
   return 0 ; 
       
}