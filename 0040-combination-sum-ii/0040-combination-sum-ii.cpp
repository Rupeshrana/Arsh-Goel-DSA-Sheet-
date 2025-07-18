class Solution {
    public:
    void combination(int i,int k, vector<int>&arr, vector<vector<int>> &ans,vector<int>&ds){
        if(k==0){
         ans.push_back(ds);
         return ;
         }
       for( int j=i;j<arr.size();j++){
        if(j>i &&arr[j]==arr[j-1])continue;
        if(arr[j]>k)break;
            ds.push_back(arr[j]);
            combination(j+1,k-arr[j],arr,ans,ds);
            ds.pop_back();
        }
       
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
         vector< int> ds;
         combination(0,target,candidates,ans,ds);
          return ans;
    }
};