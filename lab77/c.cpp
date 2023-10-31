#include <iostream>

using namespace std; 

bool isValid ( int size, int a[], int b){
    for ( int i = 0; i < size; i++){
            if ( a[i] == b ) return true; 
        }
        return false; 
    }

int main (){
    int size; 
    cin >> size; 
    int arr[size]; 
    for ( int i = 0; i < size; i++)
    {
        cin >> arr[i]; 
    }    
    int a; 
    cin  >> a; 
    if(isValid ( size , arr, a)) cout << "Yes"; 
    else cout << "No"; 
}