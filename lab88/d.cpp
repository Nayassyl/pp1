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
    int k; 
    cin >> k; 
    v.erase(v.begin() + k); 
    for ( int i = 0; i < n - 1; i++){ 
        cout << v[i] << " "; 
    }
}