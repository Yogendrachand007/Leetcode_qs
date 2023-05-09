class Solution {
public:
    int uniquePaths(int m, int n) {
     
//         int N = m+n-2;  // total no of steps
//         int r = m-1;  // arrangements.. even n-1 doesn't matter 
//         long res = 1;
        
//         for(int i=1;i<=r;i++)
//         {
//             res = res* (N-r+i)/i;    
//         }
//         return res;
        
        vector<vector<int>>dp(m, vector<int>(n,1));
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        
    }
};