class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
         int max_diagonal=0;
         int max_area=0;
          for ( int i=0;i<dimensions.size();i++){
              int diagonal=(dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]);
               int area=dimensions[i][0]*dimensions[i][1];
             if(diagonal > max_diagonal || 
               (diagonal == max_diagonal && area > max_area)){
                max_diagonal=diagonal;
                  max_area = area;

             }
          }

        return max_area;
    }
};