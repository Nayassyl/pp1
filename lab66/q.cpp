#include <iostream>
#include <iomanip>
using namespace std; 

double percentage( double a, double b){
    return (b * 100 /a); 
}
int main (){
    double a, b; 
    cin >> a >> b; 
    cout << percentage (a, b); 
}