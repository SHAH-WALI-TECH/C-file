//  Two pointer approach question
// very important concept widely used 
// In this appeoach we create start and end variable
// In this question it is used to reverse an array.
// In even array start and end values never equal to each other. In odd they are equal at  any point lakin uska koi fayada nahi hai.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int array[] = {4,2,7,8,1,2,5};
    int size = sizeof(array)/sizeof(int);
    int start = 0;
    int end = size - 1;
    while(start < end ){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}

