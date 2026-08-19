#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int temp[100];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
        }else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i];
    }

}
void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int nums1[100],nums2[100];
    int arr[200];
    for(int i=0;i<m;i++){
        cin>>nums1[i];
        arr[i]=nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
        arr[m+i]=nums2[i];
    }
    mergeSort(arr,0,m+n-1);
        for(int i=0;i<m+n;i++){
            nums1[i]=arr[i];
        }
        for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<" ";
        }
        return 0;
    
}