#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max_gap=arr[0];
        for(int i=0;i<n-1;i++){
            int diff = arr[i+1]-arr[i];
            if(diff>max_gap){
                max_gap=diff;
            }
        }
        int last_diff=2*(x-arr[n-1]);
        if(last_diff>max_gap){
            max_gap=last_diff;
        }
        cout<<max_gap<<endl;
    }
    return 0;
}
