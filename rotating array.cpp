#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=arr.size();
    vector<int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int last=arr[n-1];
        for(int j=n-1;j>0;j--){
            nums[i]=nums[j-1];
        }
        nums[0]=last;
    }
}