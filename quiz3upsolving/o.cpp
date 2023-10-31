#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    int cnt = 1;
	char ch = ' ';
	int maxx = 1;   
	if(s.size() ==  1){
		cout << s << " " << 1;
}
	else{
			for ( int i = 0; i < s.size(); i++){
    	if(  s[i] == s[i+1]){
    		cnt++; 	
		}
	
		else{
			if( cnt > maxx) {
			maxx = cnt; ch = s[i];
			}
//			cout << s[i] << " " << cnt << " " << maxx << " " << ch << endl;
			cnt = 1; 
		}
		
	}cout << ch << " " << maxx;
}
	}