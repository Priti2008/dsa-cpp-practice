// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     int n= arr.size();
//     if(n<=1) return ;
//     int lastele=arr[n-1];
//     for(int i=n-1;i>=0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=lastele;
// }
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size();
        if(n<=1) return;
        int lastele=arr[n-1];
        for(int i=n-1;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=lastele;
        
    }
};