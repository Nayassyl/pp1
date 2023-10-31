#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, p = 0;
        cin >> x;

    for ( int i = 2; i < x; i++)
    {
        if ( x % i == 0) 
        {
            p=1;
            break;
        }
    } 
    if(p)
    {
        cout << "No";
    }
    else 
        cout << "Yes";
    return 0 ;
}