class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
//         int ans=0;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++)
//         {
//             int sum = 0;
//             for(int j=i;j<n;j++)
//             {
//                 sum+= nums[j];
                
//                 if(sum%k==0)
//                     ans++;
//             }
//         }
//         return ans;
        
        unordered_map<int, int>mp;
        mp[0] = 1;
        
        int sum = 0, count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+= nums[i];
            int remaining  = sum%k;
            
            if(remaining < 0)
            remaining += k;
            
            count  = count + mp[remaining];
            mp[remaining]++;
            
        } return count;
        
    }
};
