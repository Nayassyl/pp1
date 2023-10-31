#include <bits/stdc++.h>
using namespace std; 

string strToBool(string str){
    if ( str[0] - 48 == 1 and str.size() == 1 ) return "true"; 
    else if ( str[0] - 48 == 0 and str.size() == 1 ) return "false"; 
    else return str; 
}

int main(){
    string s; 
    cin >> s; 
    cout << strToBool(s); 
     
}