#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cin >> n; 
	string s; 
	string t = "@gmail.com"; 
	for ( int i = 0; i < n; i++){
		cin >> s; 
		if( s.find(t) != 18446744073709551615){
			for(int i = 0; i < s.size()-10; i++){
				cout << s[i];
			}
			cout << endl;
		}
		
	}
}