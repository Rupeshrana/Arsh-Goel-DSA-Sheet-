class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int> arr;
       arr.push_back(nums[0]);

       for(int  i=1;i<nums.size();i++){
        if(nums[i]!=arr.back()){
            arr.push_back(nums[i]);

        }

       }
       nums=arr;
       return nums.size();

    }
};