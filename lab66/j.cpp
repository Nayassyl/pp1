#include <iostream>

using namespace std; 

int max( int a[] ){
    int max = a[0]; 
    for (int i = 0; i < 4; i++){
        if( max < a[i]){
            max = a[i]; 
        }
    }
    return max; 
}
int main (){
    int a[4];
    for (int i = 0; i < 4; i++){
        cin >> a[i]; 
    }
    cout << max(a); 
}