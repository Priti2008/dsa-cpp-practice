// #include<iostream>
// using namespace std;
// int partition(int arr[],int si,int ei){
//     int pivotElement = arr[si];
//     int count=0;
//     for(int i=si;i<=ei;i++){
//         if(arr[i]<=pivotElement) count++;
//     }
//     int pivotIdx=count+si;
//     swap(arr[si],arr[pivotIdx]);
// }
// void quicksort(int arr[],int si,int ei){
//     if(si>=ei) return;
//     int pi=partition(arr,si,end)
//     int pivotIdx=partition(arr,si,end);
// }
// int main(){
//     int arr[] ={5,1,8,2,7,6,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     quicksort(arr,si,pi-1);
//     quicksort(arr,pi+1,ei);
// }
// int main(){
//     int arr[] = {5,1,8,2,6,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;++){
//         cout<<arr[i]<<" ";
//     }

// }
#include<iostream>
using namespace std;
int partition(int arr[],int startingIdx,int endingIdx){
    int pivotEle=arr[startingIdx];
    int count =0;
    for(int i=startingIdx;i<=endingIdx;i++){
        if(arr[i]<=pivotEle) count++;
    }
    int pivotEleIdx=count+startingIdx-1;
    swap(arr[pivotEleIdx],arr[startingIdx]);
    int i=startingIdx;
    int j=endingIdx;
    while(i<pivotEleIdx && j>pivotEleIdx){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
         else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
         }
    }
    return pivotEleIdx;
}
void quicksort(int arr[],int startingIdx,int endingIdx){
    if(startingIdx>=endingIdx) return;
    int pivotEleIdx=partition(arr,startingIdx,endingIdx);
    quicksort(arr,startingIdx,pivotEleIdx-1);
    quicksort(arr,pivotEleIdx+1,endingIdx);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}