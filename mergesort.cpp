#include <iostream>
using namespace std;

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temporary arrays
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i++];
            
        } else {
            a[k++] = R[j++];
            
        }
       // k++;
    }

    // Copy remaining elements
    while (i < n1) {
        a[k] = L[i++];
        
    }

    while (j < n2) {
        a[k++] = R[j++];
        // j++;
        // k++;
    }
}

void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(a, left, mid);      // Left half
        mergeSort(a, mid + 1, right); // Right half

        merge(a, left, mid, right);   // Merge both halves
    }
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

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
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a, vector<int>& b,vector<int>& res){
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
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k++]=b[j++];

//         }
//     }
//     if(j==b.size()){
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// void mergeSort(vector<int>& v){

// }
// int main(){
//     int arr[]={5,1,3,0,4,9,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<v.size();i++){
//         cout<< v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" 
// }
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        }
        else {
            res[k++] = b[j++];   // FIXED
        }
    }

    if (i == a.size()) {
        while (j < b.size()) {
            res[k++] = b[j++];
        }
    }

    if (j == b.size()) {
        while (i < a.size()) {
            res[k++] = a[i++];
        }
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();

    if (n <= 1) return;   // FIXED

    int n1 = n / 2;
    int n2 = n - n / 2;

    vector<int> a(n1);
    vector<int> b(n2);

    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }

    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a, b, v);
}

int main() {

    int arr[] = {1, 4, 5, 8};
    int n1 = sizeof(arr) / sizeof(arr[0]);

    int brr[] = {2, 3, 6, 7, 10, 12};
    int n2 = sizeof(brr) / sizeof(brr[0]);

    vector<int> a(arr, arr + n1);
    vector<int> b(brr, brr + n2);

    vector<int> res(n1 + n2);

    merge(a, b, res);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}