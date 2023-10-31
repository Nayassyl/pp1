#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

float hyp ( int a, int b){
    return sqrt( a * a + b * b);
}
int main (){
    int a , b; 
    cin >> a >> b; 
    cout << setprecision(4) << hyp( a , b); 
}