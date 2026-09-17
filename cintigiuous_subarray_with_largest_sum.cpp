#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	int sum=x;
	int ans=x;
	for(int i=1;i<n;i++){
		cin>>x;
		sum=max(x,sum+x);
		ans=max(ans,sum);
	}
	cout<<ans<<endl;
}





