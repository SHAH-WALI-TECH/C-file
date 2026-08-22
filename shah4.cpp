#include <iostream>
// Hollow Diamond problem question 
// Use the value of n = 4 
using namespace std;
int main(){
    cout << "Enter value of n : ";
    int n; cin >> n;
    for(int i = 0; i < n ; i++){
        // For spaces
        if(i != (n-1)){
        for(int j = 0; j < (n-i-1); j++){
            cout << " ";
        }}
        cout << "*";
        // for 2 spaces 
        if(i != 0){
            for(int k = 0; k < (2*i-1); k++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;

    }
    for(int i = 0; i < n-1; i++){
        // For bottom spaces
        for(int j = 0; j < i+1; j++){
            cout << " ";
        }
        cout << "*";
        // For second spaces
        if(i != (n-2)){
        for(int k = 0 ; k < (n-1)-(2*i); k++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
    }
}
