

class Solution {
public:
    int getSecondLargest(std::vector<int> &arr) {
     int n=arr.size();
     int max=arr[0];
     for(int i=0;i<n;i++){
         if(arr[i]>max){
             max=arr[i];
         }
     }
     int smax=INT_MIN;
     for(int i=0;i<n;i++){
         if(arr[i]>smax && arr[i]!=max){
             smax=arr[i];
         }
     }
     if(smax==INT_MIN)
        return -1;
     return smax;
    }
};