class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans = matrix;
         int m = matrix.size();
        int n=matrix[0].size();
         for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<n;k++)
                {
                ans[i][k]=0; }  // Left and right column to be 0 
               }
            }
        }
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
             {
            if(matrix[i][j]==0)
              {
                for(int k=0;k<m;k++)   // loop for row
                {
                ans[k][j]=0;  // top and bottom to be 0 
                }
              }
             }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j]; // now put value from changed to original array
            }
            }  
    }
};