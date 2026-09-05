#include<bits/std.c++.h>
using namespace std;
int main(){
int n;
cout>>n;
vector<int> arr(n);
cout<<"Enter"<<n<<"elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> result;
int maxFromright = [n-1];
result.push_back(maxFromRight);
for(int i=n-2;i>=0;i--){
    if(arr[i]>=maxFromRight){
       maxFromright=arr[i];
       result.push_back(maxFromright); 
    }
}
reverse(result.begin(),result.end());
cout<<"Leaders: ";
for(size_t i=0;i<result.size();i++){
    cout<<result[i]<<i==result.size()-1?"":" ";
}
cout<<endl;
return 0;
}