#include <iostream>
using namespace std;
// n c r wala question   n!/r!(n-r)!
int factroal(int n){
    int fac  = 1;
    for(int i = 1 ; i <= n;i++){
        fac*=i;
    }
    return fac;
}
int ncr(int n , int r){
    int fac_n = factroal(n);
    int fac_r = factroal(r);
    int fac_nr = factroal(n-r);
    return fac_n / ((fac_r)*fac_nr);

}
int main(){
    int n , r;
    cout << "Enter value of n : " << endl;
    cin >> n;
    cout << "Enter value of r : " << endl;
    
    cin >> r;
    int s = ncr(n,r);
    cout << s;


}