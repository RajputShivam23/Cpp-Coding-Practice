#include<bits/stdc++.h>
using namespace std;
int getFloor(vector<int>&nums, int target){
    int low=0;
    int high=nums.size()-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]<= target){
            res=nums[mid];
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return (target - res);
}
int main(){
    vector<int>arr={8,12,55,65,90};
    int target =10;
    int ans = getFloor(arr,target);
    cout<<"Minimum difference in sorted array "<<ans;
    return 0;
}