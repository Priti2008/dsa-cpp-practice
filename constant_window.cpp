#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[i];
            if(sum<=k){
                int len=j-i+1;
                maxlen=max(maxlen,len);
            }
        }
    }
    cout<<maxlen<<endl;
}