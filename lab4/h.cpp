#include <iostream> 

using namespace std; 

int main ()
{
    int n, m, sum = 0;
    cin >> n >> m; 

    int arr[n][m]; 
    int gpa[n];

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    } 

    for ( int i = 0; i < n; i++){
        gpa[i] = 0;
    } 

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            gpa[i] = gpa [i] + arr[i][j];
        }
    } 
    
    int max = 9999999;

    for ( int i = 0; i < n ; i++){
         if ( gpa [i] < max){
            max = gpa [i];
         }
    } 
    
    for ( int i = 0; i < n ; i++){
         if ( gpa [i] == max){
            cout << i + 1; 
            break;
         }
    } 
    
}