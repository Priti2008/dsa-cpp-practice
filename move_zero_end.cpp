#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    vector<int> zero;
    vector<int> num;
    vector<int> res;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            num.push_back(arr[i]);
        }
    }

    for(int i=0;i<num.size();i++){
        res.push_back(num[i]);
    }

    for(int i=0;i<zero.size();i++){
        res.push_back(zero[i]);
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}