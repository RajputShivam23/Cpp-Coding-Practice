#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int s=0;
    int sum=0;
    for (int i=0;i<=n;i++){
        s=s+i;
    }
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }int mising= s-sum;
    cout<<mising;
}
