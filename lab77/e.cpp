#include <iostream> 
using namespace std; 

bool isValid( int k){
  if ( k == 1 ) return true; 
  if ( k % 2 == 1 ) return false; 
  return isValid ( k / 2 );  
   
}
int main (){
    int n; 
    cin >> n; 
    if ( isValid( n ) ) cout << "Yes"; 
    else cout << "No"; 
}