#include <iostream>
using namespace std;
int main(){
// int binarynum; 
// cout << "Enter decimal num : ";
// cin >> binarynum;
// int ans = 0;
// int power  = 1;
// while(binarynum > 0){
//     int lastnum = binarynum % 10;    
//     binarynum/= 10;
//     ans+=lastnum*power;
//     power*=2;
// }
// cout << ans;
int decimalnum; 
int ans = 0 , power  =1;
cout << "Enter decimal num : ";
cin >> decimalnum;
while(decimalnum > 0){
    int rem = decimalnum % 2;
    decimalnum =  decimalnum /2;
    ans  = ans + rem*power;
    power*=10;

} 
cout << ans;
return 0;
}

