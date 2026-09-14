#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int r;
	cin>>r;
	int target;
	cin>>target;
	vector<int> rotated;
	for(int i=r;i<n;i++){
		rotated.push_back(arr[i]);
	}
	for(int i=0;i<r;i++){
		rotated.push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<<rotated[i];
		if(i<n-1) {
			cout << " ";
		}
	}
	cout<<endl;
	int low=0;
	int high=n-1;
	int ans = -1;
	while(low<=high){
		int mid=(low+high)/2;
		if(target==rotated[mid]){
			ans = mid;
			break;
		}
	
	if(rotated[low]<=rotated[mid]){
		if(rotated[low]<=target && target<=rotated[mid]){
			high=mid-1;
		}else{
			low=mid+1;
			
		}
	}if(rotated[mid]<=rotated[high]){
		if(rotated[mid]<=target && target<rotated[high]){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}	
	}
	cout << ans << endl;
	return 0;
}
















