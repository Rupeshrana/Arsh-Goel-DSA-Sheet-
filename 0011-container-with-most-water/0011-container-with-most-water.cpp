class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int maxwater=0;
        while(low<high){
            if(height[low]<height[high]){
            maxwater=max(maxwater,(height[low]*(high-low)));
            low++;
            }
            else
            {
            maxwater=max(maxwater,(height[high]*(high-low)));
            high--;  
            }

            
        }
        return maxwater;
    }
};