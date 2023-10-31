#include <iostream> 

#include <cmath>

using namespace std;

int main()
{
   int n, k, pos;
   cin >> n >> k;
   int arr[n]; 

   for( int i=0; i < n; i++){
        cin >> arr[i];
   }
    for( int i=0; i < n; i++){
        if ( arr[i] == k){
            cout << i + 1; 
            break;
        } 
        else {
            for ( int i = n-1; i >=0 ; i--){
                if (arr[i] < k){
                    cout << i + 1;
                }  
                break;
            } break;
        } break;
        
    } 
   return 0 ; 
       
}