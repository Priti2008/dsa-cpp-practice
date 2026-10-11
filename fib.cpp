#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else{
        return fib(n-1)+fib(n-2);
    }
}
int solve(){
    int ans=fib(5);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<" ";
    }
}