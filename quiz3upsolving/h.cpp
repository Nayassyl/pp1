#include <bits/stdc++.h>
using namespace std; 
double GetPriceQualityRatio(int price, int quality){
	return price * 1.0 / quality ;
}

int main(){
	int n; cin >> n; double minn = 10000000;
	string phone; 
	for( int i = 0;i < n; i++){
		string s; int p, q; 
		cin >> s >> p >> q; 
		double rat = GetPriceQualityRatio ( p , q); 
//		double rat = p * 1.0 / q;
//		cout << s << " " << rat << " " << minn << endl;
		if(minn > rat) {
			minn = rat;
			phone = s;
		}
	}
	cout << phone;
	
}