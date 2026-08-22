#include <iostream>
using namespace std;
// For output 1 
//           121
//          1221    like this

int main(){
    cout << "Enter value of n  :  ";
    int n; cin >> n;
    for(int i = 0; i < n ; i++){
        int num = 1;
        // For space
        if(i != (n-1)){
            for(int j = 0; j < (n-1-i); j++){
                cout  << " ";
            }
        }
        // For values
        for(int k = 0; k < (i+1); k++){
            cout << num;
            num+=1;
        }
        if(i != 0){
            for(int j = i; j > 0; j--){
                cout << j;
            }
        }
        cout << endl;


    }

    
    

}