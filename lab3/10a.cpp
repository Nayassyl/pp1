#include <iostream>

using namespace std;

int main()
{
 int n, k, pos;
 cin >> n >> k;
 int arr[n];
 
 for (int i = 0; i < n; i++)
 {
    cin >> arr[i];
 }
 
 for (int i = 0; i < n; i++)
 {
    if (arr[i] == k)
    {
        pos = i + 1;
        break;
    }
    else
    {
        if (k < arr[0])
        {
            pos = 1;
        }
        else if (k > arr[n - 1])
        {
            pos = n;
        }
        else if (k < arr[i])
        {
            pos = i;
            break;
        }
    }
 }
 
 cout << pos;

 return 0;
}