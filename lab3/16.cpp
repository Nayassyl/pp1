#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, p = 0;
        cin >> x;

    for ( int i = 1; i <= sqrt(x); i++)
    {
        if (i*i == x) 
        {
            p=1;
            break;
        }
        if (i*i > x)
        {
            break;
        }
    } 
    if(p)
    {
        cout << "Yes";
    }
    else 
        cout << "No";
    return 0 ;
}