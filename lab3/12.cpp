#include <iostream> 

#include <algorithm>

using namespace std;

int main()
{
    int n , k ;
    
    cin >> n;
    int arr1[n]; 
    for ( int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    
    cin >> k;
    int arr2[k];  
    for ( int i = 0; i < k; i++){
        cin >> arr2[i];
    } 
    
    int a = n + k ;
    int arr3[a] ; 
    
    for ( int i = 0; i < n; i++){
        arr3[i] = arr1[i]; 
    } 
    
    for ( int i = 0; i < k; i++){
        arr3[ n + i ] = arr2 [i];
    } 

    sort ( arr3 , arr3 + a);
    for(int i = 0; i < a; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}