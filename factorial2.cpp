// #include<bits/stdc++.h>
// using namespace std;
// int main(){ 
// int n;
// cin>>n;
// int fact=1;
// for(int i=1;i<=n;i++){
//     fact=fact*i;
// }
// cout<<fact<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n* fact(n-1);
    }
}
int solve(){
    int ans=fact(5);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}