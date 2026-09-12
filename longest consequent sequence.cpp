#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int current=arr[i];
		int count=1;
		while(find(arr.begin(),arr.end(),current+1)!=arr.end()){
			current++;
			count++;
		}
		ans=max(ans,count);
	}
	cout<<ans;
	return 0;
}