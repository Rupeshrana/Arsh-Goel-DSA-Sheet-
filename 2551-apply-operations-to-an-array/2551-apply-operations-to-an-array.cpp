class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n= nums.size();
        int low=0;
        int high=1;
        while(high<n){
            if(nums[low]==nums[high]){
                nums[low]=2*nums[low];
                nums[high]=0;
                

            }
            low++;
            high++;
        }
        int nonZeroIndex = 0; 
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
       
        return nums;
    }
};