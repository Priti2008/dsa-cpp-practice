#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=arr.size();
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]+=arr[i][j];
        }
    }
    cout<<arr;
}