#include <bits/stdc++.h> 
using namespace std; 
bool root(int b){ 
  for(int i=4;i<=9;i++){ 
    if(i*i==b){ 
      return true; 
    } 
  } 
  return false; 
} 
int main(){ 
  string s,a,b; 
  cin>>s; 
  stack<char> st; 
  for(int i=0;i<s.size();i++){ 
    if(st.empty()){ 
      st.push(s[i]); 
      continue; 
    } 
     
    a=st.top(); 
    b=s[i];    
    if(root(stoi(a+b))==1){ 
      st.pop(); 
      } 
    else{ 
      st.push(s[i]); 
    } 
    
  }   
   if(st.empty()){ 
    cout<<"Stack is empty"; 
   } 
   else{ 
    while(!st.empty()){ 
      cout<<st.top(); 
      st.pop(); 
    } 
   }  
}