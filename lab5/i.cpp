#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string a, b; 
    cin >> a >> b; 

    int m = 0, n = 0; 
    int s = a.size();
    int t = b.size();

    for( int i = 0; i < s; i++){
        for ( int j = 0; j < t; j++){
            if ( a[i] == b [j]) 
            m = 1; 
            else 
            {
                m = 0; 
                break;
            }
        }
    }

    for ( int i = 0; i < s; i++){
        for ( int j = t - 1; j >= 0; j--){
            if ( a[i] == b[j]) 
            n = 1; 
            else 
            {
                n = 0; 
                break;
            }
        }
    }
    if ( n == 1){
        cout << "YES";
    }
    else 
    cout << "NO"
    
    return 0; 
}