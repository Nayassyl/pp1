#include <iostream>
using namespace std; 

string upper( string s){ 
    for( int i = 0; i < s.size(); i++){
        if( i % 2 == 0){
            s[i] = toupper(s[i]) ; 
        }
    }
    return s; 
     
}
int main(){
    string s; 
    cin >> s; 
    cout << upper(s); 
}