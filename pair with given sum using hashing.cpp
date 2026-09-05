#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>> t;
    unordered_set<int > s;
    for(int i=0;i<n;i++){
        int needed=t-arr[i];
        if(s.find(needed)!=s.end){
            cout<<"Yes"<<endl;
            return 0;
        }
        s.insert(arr[i]);
    }
    cout<<"No"<<endl;
    return 0;
}