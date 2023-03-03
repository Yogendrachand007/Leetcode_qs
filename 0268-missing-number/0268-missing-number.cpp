class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int missing=0;
     //   sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            missing = missing + nums[i];
        }
            return (n*(n+1)/2 - missing);
    }
};