#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i=0;i<n;i++){
        if(i==0 && arr[i]!=arr[i+1]){
            cout << arr[i];
            break;
        }
        else if(i==n-1 && arr[i]!=arr[i-1]){
            cout << arr[i];
            break;
        }
        else if(i>0 && i<n-1 && arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            cout << arr[i];
            break;
        }
    }
}