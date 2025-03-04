class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            int num=n%3;
        if(num==2){
            return false;

        }
        n /=3;
        }

        
        
        return true;
    }
};