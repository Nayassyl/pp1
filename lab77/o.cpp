#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void convertation(int a, int b){
    string s;
    if(b <= 10){
        while (a != 0)
    {
        int ost = a % b;
        s += (ost + '0');
        a = a / b;
    }
    for(int i = s.length() - 1; i >= 0; i--){
        cout << s[i];
    }
    }if(b > 10){
        string s;
        while (a != 0) {
        int ost = a % b;
        char ch;
        if (ost < 10) {
            ch = ost + 48;
        }
        else {
            ch = ost + 55;
        }
        s += ch;
        a =  a / b;
    }
    int i = 0, j = s.size() - 1;
    while(i <= j)
    {
      swap(s[i], s[j]);
      i++;
      j--;
    }
    cout << s;
    }
    
    }
int main(){
    int a, b;
    cin >> a >> b;
    convertation(a,b);
}
