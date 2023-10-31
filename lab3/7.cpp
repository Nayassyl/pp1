#include <iostream>

using namespace std;

int main()
{
    int n, i;
        cin >> n; 
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int maxel = arr[0];
    int minel = arr[n-1];

    for (int i = 0; i < n; i++)
    {

    
        if (maxel < arr[i])
            maxel = arr[i]; 
        else if (minel > arr[i])
            minel = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == maxel)
            arr[i] = minel;
            cout << arr[i] << " ";
    }


    return 0 ;
}