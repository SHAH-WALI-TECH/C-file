#include <iostream>
#include <climits>
using namespace std;
int main(){
    int array[] = {2,4,1,3,7,8,6,1,9};
    int smallest = INT_MAX;
    int lar = INT_MIN;
    for(int i = 0; i < sizeof(array)/sizeof(int); i++){
        if(smallest > array[i]){
            smallest  = array[i];
        if(i != 0){
            cout << i;
        }
        }
        
}
return 0;
}