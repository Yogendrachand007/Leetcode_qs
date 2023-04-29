class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
    {
            sum+= nums[i]; // i=0 se i=1 add then store // then i=2 se aage or add kro
        
        if(sum>maxi)
        {
            maxi=sum;    // then compare 
        }
            
        if(sum<0) //biggest catch in this question  // if smaller than 0 so more i++
            sum=0;       
    }
        return maxi;        
    }  
};