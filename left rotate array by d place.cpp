// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     vector<int> ans;
//     cin>>d;
//     for(int i=0;i<d;i++){
//         reverse(arr.begin(),arr.end());
//         ans.push_back(arr[i]);
//     }
//     for(int i=d;i<n;i++){
//         reverse(arr.begin(),arr.end());
//         ans.push_back(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         reverse(arr.begin(),arr.end());
//         ans.push_back(arr[i]);
//     }
//     for(auto x:ans){
//         ans.push_back(x);
//     }
//     cout<<ans<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;

    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());

    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}