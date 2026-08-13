#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);      // Left half
        mergeSort(arr, mid + 1, right); // Right half

        merge(arr, left, mid, right);   // Merge both halves
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int a[],int b[],int res[]){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             res[k++]=a[i++];
//         }else{
//             res[k++]=b[j++];
//         }
//     }
// }
// int main(){
//     int arr[]={1,4,5,8};
//     int n1=sizeof(arr)/sizeof(arr[0]);
//     int b[]={2,3,6,7,10,12};
//     int n2=sizeof(b)/sizeof(b[0]);
//     int res[n1+n2];
//     merge(a,b,res);
// }
// int main(){
//     int a[]={1,4,5,8};
//     int n1=sizeof(a)/sizeof(a[0]);
//     int b[]={2,3,6,7,10,12};
//     int n2=sizeof(b)/sizeof(b[0]);
//     int res[n1+n2];
// }









