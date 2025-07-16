class Solution {
public:
void foundcombination( int ind,int k,vector<int> &candidates,vector<int>&ds,vector<vector<int>>&ans){
    if(ind==candidates.size()){
        if(k==0){
            ans.push_back(ds);
        }
        return ;

    }
    if(candidates[ind]<=k){
       ds.push_back(candidates[ind]);
        foundcombination(ind,k-candidates[ind],candidates,ds,ans);
        ds.pop_back();
    }
    foundcombination(ind+1,k,candidates,ds,ans);
}
public:
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
     vector<int> ds;
     foundcombination( 0,target,candidates,ds,ans);
     return ans;

        
    }
};