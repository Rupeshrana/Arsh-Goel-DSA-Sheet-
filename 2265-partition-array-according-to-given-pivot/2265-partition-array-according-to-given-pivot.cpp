class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans,v2,v3;
        for( int i=0;i<nums.size();i++){
             if(nums[i] < pivot){
                ans.push_back(nums[i]);
               
             }
        }
        for( int i=0;i<nums.size();i++){
             if(nums[i] == pivot){
                v2.push_back(nums[i]);
               
             }
        }for( int i=0;i<nums.size();i++){
             if(nums[i] > pivot){
                v3.push_back(nums[i]);
               
             }
        }
        ans.insert(ans.end(), v2.begin(), v2.end());
        ans.insert(ans.end(), v3.begin(), v3.end()); 
        return ans;
        
    }
};