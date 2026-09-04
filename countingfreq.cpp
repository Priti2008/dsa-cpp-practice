#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    unordered_map<int , int> count;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(count.find(x)==count.end()){
            ans.push_back(x);
        }
        count[x]++;
    }
    for(int x:ans){
        cout<<x<<':'<<count[x]<<endl;
    }
    return 0;

}