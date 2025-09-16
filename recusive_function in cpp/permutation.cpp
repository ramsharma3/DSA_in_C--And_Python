#include<iostream>
#include<vector>
using namespace std;

void solve(vector<vector<int>>ans , vector<int> nums , int index ){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;


    }

    for(int i = index ; i <= nums.size(); i++){
        swap(nums[index] , nums[i]);
        solve(ans , nums , index+1);
        //for backtracking
        swap(nums[index], nums[i]);
    }

}