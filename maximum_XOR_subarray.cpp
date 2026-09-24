// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int >arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi=-1;
//     int start=0;
//     int end=0;
//     for(int i=0;i<n;i++){
//         int current=0;
//     for(int j=i;j<n;j++){
//         current^=arr[j];
//         if(current>maxi){
//             maxi=current;
//             start=i;
//             end=j;
//         }
//     }
//     }
//     cout<<maxi<<" "<<start<<" "<< end<<endl;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=-1;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr^=arr[j];
            if(curr>maxi){
                maxi=curr;
                start=i;
                end=j;
            }
        }
    }
    cout<<maxi<<" "<<start<<" "<<end<<endl;
}