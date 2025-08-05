class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>> pixel;
       pixel.push({sr,sc});
       int x=image[sr][sc];
       if(image[sr][sc]!=color){
        image[sr][sc]=color;
       }
        while(!pixel.empty()){
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            int r=pixel.front().first;
            int c=pixel.front().second;
            pixel.pop();
            for( int i=0;i<4;i++){
                 int nrow=r+drow[i];
                 int ncol=c+dcol[i];
                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]!=color && image[nrow][ncol]==x){
                    pixel.push({nrow,ncol});
                    image[nrow][ncol]=color;
                 }
            }


        }
        return image;

        
    }
};