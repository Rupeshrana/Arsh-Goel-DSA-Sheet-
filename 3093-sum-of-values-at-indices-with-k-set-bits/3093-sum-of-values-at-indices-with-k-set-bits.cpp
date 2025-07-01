class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int num=i;
            while(num!=0 ){
                if(num%2==1){
                    cnt++;
                }
                num=num>>1;
            }
            if(cnt==k){
              sum=sum+nums[i];
            }
        }
        return sum;
    }
};