// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=arr.size();
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]+=arr[i][j];
//         }
//     }
//     cout<<arr;
// }

class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]+=b[i][j];
            }
        }
        
    }
};