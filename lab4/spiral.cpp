#include <iostream>

using namespace std; 

int main()
{
    int n; 
    cin >> n;  
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = 0; 
        }
    }
    int dx = 1, dy = 0, x = -1, y = 0; 
    int cnt = 1;
    
    while ( cnt <= n * n )
    {
        if ((x + dx >= 0 && x + dx < n) && (y + dy >= 0 && y + dy < n) && (arr[y + dy][x + dx] == 0))
        {
            y = y + dy;
            x = x + dx; 
            arr[y][x] = cnt; 
            cnt++;
        }
        else 
        {
            if ( dx == 1 ){
                dx = 0; 
                dy = 1; 
            }
            else if ( dy == 1){
                dx = -1; 
                dy = 0; 
            }
            else if ( dx == -1 ){
                dx = 0; 
                dy = -1;
            }
            else if ( dy == -1){
                dy = 0; 
                dx = 1; 
            }
        }
    }

    for ( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr [i][j] << " "; 
        }
        cout << endl; 
    }
}
