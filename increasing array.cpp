#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
if(!(cin>>n)) return 0;
vector<long long> a(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long move=0;
for(int i=1;i<n;i++){
    if(a[i]<a[i-1]){
        move+=(a[i-1]-a[i]);
        a[i]=a[i-1];
    }
}
cout<<move<<"\n";
return 0;
}