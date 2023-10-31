#include <iostream> 


using namespace std; 

int main ()
{
    int n, m;
    cin >> n >> m; 

    int arr[n][m]; 
    int sumrow[n];
    int sumcolumn[m];
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    } 
    
    for ( int i = 0; i < n; i++){
        sumrow[i] = 0;
    }

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            sumrow[i] = sumrow[i] + arr[i][j]; 
        }
    }  

    for ( int j = 0; j < m; j++){
        sumcolumn[j] = 0;
    }

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            sumcolumn[j] = sumcolumn[j] + arr[i][j];  
        }
    }  

    for ( int i = 0; i < n; i++){
            cout << "The sum of row number " << i + 1 << " is " << sumrow[i] << " " ; 
        cout << endl; 
    }

    for ( int j = 0; j < m; j++){
            cout << "The sum of column number " << j + 1 << " is " << sumcolumn[j] << " " ; 
        cout << endl; 
    } 
    return 0;
}