#include <iostream>
using namespace std;

int n, a[105], ans=1;

int gcd(int a, int b){
	while(a*b!=0){
		if(a>b){
			a%=b;
		}else{
			b%=a;
		}
	}
	return a+b;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			ans=max(ans, gcd(a[i], a[j]));
		}
	}
	cout<<ans;
}