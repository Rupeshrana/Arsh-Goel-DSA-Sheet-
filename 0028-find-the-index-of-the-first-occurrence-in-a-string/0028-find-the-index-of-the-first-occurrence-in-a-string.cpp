class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int pos=0;
        
        for(int i=0;i<haystack.size();i++){
            string sub=haystack.substr( pos,n);
            if(sub==needle){
                return pos;
            }
            pos++;

        } 
        return -1;
    }
};