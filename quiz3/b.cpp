#include <iostream>
using namespace std; 

int main(){
    string s; 
    getline(cin , s); 

    string s1="";
	bool was=0;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]==' '){
			if(was==0){
			    cout<<s1<<endl;
		    }
			s1="";
			was=0;
		}else{
			s1+=s[i];
			if(s[i]>='0' && s[i]<='9'){
				was=1;
			}
		}
	}
	if(was==0){
		cout<<s1<<endl;
	}
}