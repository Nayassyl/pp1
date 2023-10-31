#include <iostream> 

using namespace std; 

string binary ( int n , string res ){
    if ( n == 0 ) {
        return res; 
    }
    return binary ( n / 2 , char ( n % 2 +'0') + res);
}
int main (){
    int n; 
    cin >> n; 
    cout << binary ( n , "" ); 
}