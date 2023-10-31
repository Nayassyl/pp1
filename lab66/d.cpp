#include <iostream>
using namespace std; 

int book( int n , int arr[] , int x){
    for ( int i = 0; i < n; i++){
        if ( arr[i] == x )
        return true; 
    }
    return false; 
}

int main(){
    int n; 
    cin >> n; 
    int id[n]; 

    for ( int  i = 0; i < n; i++){
        cin >> id[i]; 
    }
    
    int x; 
    cin >> x; 

    if ( book( n , id , x)) cout << "Yes"; 
    else cout << "No"; 
}