#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lsum=0;
    int rsum=0;
    int maxsum=0;
    for(int i=0;i<k-1;i++){
        lsum+=arr[i];
        maxsum=lsum;
    }
    int rightidx=n-1;
    for(int i=k-1;i>=0;i--){
        lsum=lsum-arr[i];
        rsum=rsum+arr[rightidx];
        rightidx=rightidx-1;
        maxsum=max(maxsum,lsum+rsum);
    }
    cout<<maxsum<<endl;
}