#include<iostream>
#include<vector>
using namespace std;
int missing(const vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]!=nums[i]+1){
            return nums[i]+1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,4,5,6};
   
    cout<<missing(nums);

    return 0;
}