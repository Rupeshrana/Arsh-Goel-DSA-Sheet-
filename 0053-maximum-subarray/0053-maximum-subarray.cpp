class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int sum=0;
        if( nums.size()==1){
            return nums[0];
        }
        for( int i=0;i<nums.size();i++){
           if( sum<0){
                sum=0;
             }
            sum=sum+nums[i];
            if(sum>max_sum){
                max_sum=sum;
            }
            
        }
        return max_sum ;
        
    }
};