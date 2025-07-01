class Solution {
public:
    int possibleStringCount(string word) {
        int low=0;
         int high=1;
         int cnt=1;
         if(word.empty()){
            return 0;
         }
        while(high<word.size()){
            if( word[low]==word[high]){
                cnt++;
            }
            low++;
             high++;
        }
        return cnt;
    }
};