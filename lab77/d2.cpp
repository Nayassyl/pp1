#include <iostream> 

using namespace std; 

int sum( string l,  int i , int summ ){
    if ( i == l.size()){
        return summ; 
    }
    return sum( l, i + 1 , summ + (l[i] - 48) );
}
int main (){
    string n;
    cin >> n; 
    cout << sum ( n , 0, 0); 
}