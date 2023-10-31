#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(vector<int>v){
    for(int i=0;i<v.size()/2;i++ ){
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>v1;
    int n,b; cin>> n;
    for(int i=0;i<n;i++){
        cin>>b;
        v1.push_back(b);
    }
    sort(v1.begin(),v1.end());
    do{
        if(ispalindrome(v1)){
            for(int i=0;i<v1.size();i++){
                cout<<v1[i]<<" ";
            }
        exit(0);
        }
    }while(next_permutation(v1.begin(),v1.end()));
    cout<<"Impossible"<<endl;
return 0;
}

