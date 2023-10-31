#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum = 0;
    
    while ( cin >> n )
    {
        sum = sum + n;
        continue;
    }

    cout << sum << endl;
    return 0 ;
}


