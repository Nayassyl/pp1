#include <iostream> 

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for ( int i = 0 ; i < n; i++){
        cout << i << " "; 
    }
    
    cout << endl; 

    for ( int j = 1; j < n; j++){
        cout << j << " ";
        for ( int i = 1; i < n; i++){
            cout << i * j << " ";
        }
        cout << endl;
    }
}