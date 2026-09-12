class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // int count=0;
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]!=0){
        //         swap(arr[i],arr[count]);
        //         count++;
        //     }
        // }
        vector<int> temp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            arr[i]=temp[i];
        }
        for(int i=temp.size();i<n;i++){
            arr[i]=0;
        }
        
    }
};