#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int totalpeople=0;
        int count=0;
        for(int i=0;i<n;i++){
            totalpeople+=arr[i];
            int handshake=(totalpeople*(totalpeople-1))/2;
            if(handshake<=m){
                count++;
            }
        }
        cout<<count<<endl;
    }
}