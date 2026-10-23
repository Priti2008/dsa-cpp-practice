#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        string sub="";
        for(int j=i;j<n;j++){
            sub=sub+s[j];
            cout<<sub<<endl;
        }
    }
}
