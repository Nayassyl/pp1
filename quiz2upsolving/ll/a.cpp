#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 

    for ( int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    int sumodd = 0, sumeven = 0, cntodd = 0, cnteven = 0; 
    for ( int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
            sumeven += arr[i]; 
            cnteven++;
        }
        else{
            sumodd += arr[i]; 
            cntodd++; 
        }
    }
    cout << "Left hand magic power: " << sumeven * cnteven << endl; 
    cout << "Right hand magic power: " << sumodd * cntodd; 
}