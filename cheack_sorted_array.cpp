class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        vector<int> temp=arr;
        sort(arr.begin(),arr.end());
        if(temp==arr){
            return true;
        }else{
             return false;
        }
        
        
    }
};