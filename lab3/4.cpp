#include <iostream>
using namespace std;
int main()
{
 int n , i , m;
 cin >> n ; 
 int arr[n] ;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i] ;
 } 
 for (int i = 0; i < n; i++)
 {

  if (arr[0] < arr[i])
   arr[0] = arr[i] ; 
 }
for (int i = 0; i < n; i++)
 {

  if (arr[0] == arr[i])
   m = i + 1 ; 
 }

 cout <<  m ;

 return 0;
}