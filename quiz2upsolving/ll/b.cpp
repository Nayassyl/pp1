#include <iostream>
using namespace std; 

int main(){
    int w, h, n; 
    cin >> w >> h >> n; 
    int arr[w][h]; 

    for (int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            arr[i][j] = 0; 
        }
    }

    int x1[n], y1[n], x2[n], y2[n]; 
    for( int k = 0; k < n; k++){
        cin >> x1[k] >> y1[k] >> x2[k] >> y2[k];
    }

    for( int k = 0; k < n; k++){
    for( int i = 0; i < w; i++){
        for ( int j = 0; j < h; j++){
            if( i >= x1[k] && i < x2[k] && j >= y1[k] && j < y2[k]){
                arr[i][j] = 1; 
            }
        }
    }
    }

    int area = 0; 
    for (int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if ( arr[i][j] == 0) area++;  
        }
    }
    cout << area; 
}