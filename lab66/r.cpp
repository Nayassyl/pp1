#include <iostream>
using namespace std; 

char upp( char s){
    if ( s >= 'a' && s <= 'z') return int (s - 32); 
    else return s; 
}
int main (){
    char s; 
    cin >> s; 
    cout << upp(s); 
}