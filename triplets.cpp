#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int count = 0;

    for(int j=0; j<n-2; j++){

        if(arr[j]+1 == arr[j+1] && arr[j]+2 == arr[j+2]){
            count++;
        }

        if(arr[j] == arr[j+1] && arr[j+1] == arr[j+2]){
            count++;
        }
    }

    cout << count << endl;
}