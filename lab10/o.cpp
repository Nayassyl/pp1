#include <bits/stdc++.h> 
using namespace std; 
 
int main(){ 
    int a; 
    cin >> a; 
    vector <int> b(a); 
    for (int i = 0; i < a; i++){ 
        cin >> b[i]; 
    } 
    for (int i = 0; i < a; i++){ 
        string c; 
        int j = 0; 
        while (b [i] > 0){ 
            c += to_string (b[i] % 2); 
            b[i] /= 2; 
            j++; 
        } 
        reverse (c.begin(), c.end()); 
        cout << c << endl; 
    } 
}

