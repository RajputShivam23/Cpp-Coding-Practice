// C++ implementation to find the index of first 1
// in an infinite sorted array of 0's and 1's
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&a,int low,int high, int target){
    int res=-1;
    while(low<=high){
        int mid =low+(high-low)/2;
        if (a[mid]==target){
            res=mid;
            high=mid-1;
        }else if(a[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return res;
}
int searchInfiniteArray(vector<int>&a ,int target){
    int low = 0;
    int high= 1;
    while (target > a[high]){
        low=high;
        high= high*2;
    }
    return binarysearch(a, low,high,target);
}

// Driver program to test above
int main()
{

    vector<int>arr = { 0, 0, 1, 1, 1, 1 };
    int target =1;
    int ans= searchInfiniteArray(arr, target);
    cout<<ans;
    return 0;
}