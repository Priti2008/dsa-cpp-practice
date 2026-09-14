#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int floor=-1;
    int ceil=-1;
    int x;
    cin>>x;
    vector<int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            if(floor==-1 || arr[i]>floor){
                floor=arr[i];
            }
        }
        if(arr[i]>=x){
            if(ceil==-1 || arr[i]<ceil){
                ceil=arr[i];
            }
            
        }
    }
    cout<<floor<<ceil<<endl;
    return 0;
    
}