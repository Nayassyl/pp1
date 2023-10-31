#include <iostream> 
#include <string>

using namespace std; 

int main()
{
   string a, b; 
   cin >> a >> b; 

   int m = 0; 

   int k = a.size();
   int l = b.size();

   for ( int i = 0; i < min(k, l); i++){
    if( a[i] == b[i])
    m = 1; 
    else {
    m = 0; 
    break;}
   }
   
   if ( m == 1)
   cout << "YES";
   else if ( m == 0)
   cout << "NO";
    return 0; 
}