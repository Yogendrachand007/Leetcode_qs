class Solution {
public:
    int uniquePaths(int m, int n) {
     
        int N = m+n-2;  // total no of steps
        int r = m-1;  // arrangements.. even n-1 doesn't matter 
        long res = 1;
        
        for(int i=1;i<=r;i++)
        {
            res = res* (N-r+i)/i;    
        }
        return res;
        
    }
};