#include <iostream>
#include <climits>
#include <vector>
using namespace std;
void twoSum(vector<int>& nums, int target) {
        int b = 1;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            int j;
            for( j = 0; j < size ; j++){
                if(i != j){
                if(nums[i] + nums[j] == target){
                    b = b+1;
                    break;
                
                }


            }
        }
            if(b > 1){
                cout << "["<< i  << ","<< j << "]";
                break;
            }

        }
        

        
    }
    int main(){
        int target = 9;
        vector<int> nums = {2,7,11,15};
        twoSum(nums,target);

    }


    