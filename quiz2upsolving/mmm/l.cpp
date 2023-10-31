#include <iostream>
using namespace std; 

int main (){
    int a , b; 
    cin >> a >> b; 

    int arr[a][b]; 

    for ( int i = 0; i < a; i++){
        for( int j = 0; j < b; j++){
            cin >> arr[i][j]; 
        }
    }

    int s; 
    cin >> s; 
    bool isPenalty = true; 
    for ( int i = 0; i < a; i++){
        for( int j = 0; j < b; j++){
            if ( arr[i][j] > s){
                isPenalty = false;
                break;  
            } 
        }
    }
    if ( isPenalty ) cout << "No penalty for today.";
    else cout << "Penalty!"; 


}