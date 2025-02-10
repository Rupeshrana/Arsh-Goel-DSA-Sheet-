class Solution {
public:
    bool isPalindrome(string s) {
       string f;
        for (char c : s) {
            if (isalnum(c)) {
                f += tolower(c);
            }
        }
    int n=f.size();
    int low=0;
    int high=n-1;
    while(low<high){
        if(f[low]!=f[high]){
            return false;
        }
        low++;
        high--;
       
    }
     return true; 
    }
};