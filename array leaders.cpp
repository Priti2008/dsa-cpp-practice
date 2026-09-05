#include<bits/stdc++.h>
using namespace std;
vector<int> findLeaders(vector<int> arr){
    vector<int> result
    int n=arr.size();
int maxFromright()=arr[n-1];
result.push_back(maxFromright);
for(int i=n-2;i>=0;i--){
    if(arr[i]>=maxFromright){
        maxFromright=arr[i];
        result.push_back(maxFromright);
    }
}
reverse(result.begin(),result.end());
return result;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter"<< n<<"elemnet";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=findLeaders(arr);
    cout<<"Leader: ";
    for(size_t i=0;i<ans.size();i++){
        cout<<ans[i]<<(i==ans.size()-1?"":" ");
    }
    cout<<endl;
}