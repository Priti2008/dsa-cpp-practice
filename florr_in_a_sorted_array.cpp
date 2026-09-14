#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            pos=i;
        }else{
            break;
        }
    }
    cout<<pos<<endl;
    return 0;
}