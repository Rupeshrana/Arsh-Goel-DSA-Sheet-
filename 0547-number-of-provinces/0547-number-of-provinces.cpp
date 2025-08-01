class Solution {
private:
    void dfs(int node, vector<vector<int>>&adjLs,vector<int> &visited){
        visited[node]=1;
        for(int neighbour:adjLs[node]){
            if(!visited[neighbour]){
            dfs(neighbour,adjLs,visited);
            }
        }
        
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        // converting the adj matrix to the adj list 
       vector<vector<int>> adjLs(V);
        for(int i=0;i<V;i++){
            for( int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                adjLs[i].push_back(j);
                  adjLs[j].push_back(i);
                }

            }
        }
       vector<int> visited(V, 0);
        int cnt=0;
        for( int i=0;i<V;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adjLs,visited);
                
            }
        }
        return cnt;
        
    }
};