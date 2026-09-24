#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            res=i;
            break;
        }
    }
    cout<<res<<endl;
}