#include <iostream>
// Butter fly wala question
using namespace std;
int main(){
    cout << "Enter the value of n : ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){

        // for stars
        for(int j = 0; j < (i+1); j++){
            cout << "*";
        }
        // for space
        if(i != (n-1)){
            for(int k = 0; k < (n+2-(i*2)); k++){
                cout << " ";
            }}
            for(int j = 0; j < (i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
    // For bottom
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            cout << "*";
        }
        // For spaces
        if(i != 0){
            for(int j = 0 ; j < i*2; j++){
                cout << " ";
            }
        }
        for(int k = n-i; k > 0; k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

