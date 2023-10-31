#include <iostream>
using namespace std; 

int sum( string s){
    int sum = 0; 
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - 48;
    }
    return sum; 
}
int main(){
    string s; 
    cin >> s; 
    cout << sum(s); 
}