#include <iostream>
#include <algorithm>

using namespace std; 

void rev( int a[] , int n ){
    reverse ( a , a + n); 
    for ( int i = 0; i < n; i++){
        cout << a[i] << " "; 
    } 
}
int main (){
    int n; 
    cin >> n; 
    int arr[n]; 
    for(int i = 0;i < n; i++){
        cin >> arr[i]; 
    }
    rev( arr , n); 
    }