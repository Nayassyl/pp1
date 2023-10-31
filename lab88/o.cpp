#include <iostream>
#include <set>
#include <algorithm>
using namespace std; 

int main(){
    string str; 
    cin >> str;  
    set<int> s; 
    for ( int i = 0; i < str.size(); i++){
        s.insert(tolower(str[i])); 
    }
    cout << s.size() << endl; 
    for ( set<int> :: iterator i = s.begin(); i != s.end(); i++){
         cout << char(*i) << " "; 
    } 
    
}