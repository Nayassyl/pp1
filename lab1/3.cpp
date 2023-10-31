#include <iostream> 
using namespace std;
 
 int main(){
    int N, a, b, c, d;
    cin >> N;
    a = N % 2;
    N = N / 2;
    b = N % 2;
    N = N / 2;
    c = N % 2;
    N = N / 2;
    d = N % 2;
    cout << 8 * a + 4 * b + 2 * c + d;
    
    return 0;

     
 }  