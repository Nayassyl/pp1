#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    vector<int> v; 
    for ( int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        v.push_back(x); 
    }
    int a , b;  
    cin >> a >> b;
    v.insert(v.begin() + a , b); 
    for ( int i = 0; i < v.size(); i++){ 
        cout << v[i] << " "; 
    }
}