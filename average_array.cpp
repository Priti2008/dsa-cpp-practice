// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     double average =(double)sum/n;
//     cout<<average;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enterthe number";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    double avg;
    avg=sum/n;
    cout<<avg;
    

}