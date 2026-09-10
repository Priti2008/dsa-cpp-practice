#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int > mat(n);
    int n=mat.size();
    int m=mat[0].size();
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]<0){
                count++;
            }
        }
    }
    cout<<count;

}