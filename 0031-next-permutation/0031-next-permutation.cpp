class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int ind=-1;  // a reason for -1 as a reference
        int n = nums.size();
        
        for(int i=n-2;i>=0;i--)  // 2nd last se last comapare kro element
        {
        if(nums[i]<nums[i+1]){   // mil gya element
            ind  = i;
            break;
            }
        }
        
        if(ind == -1)  // now code is basically in reverse order thats it!!!
        {
            reverse (nums.begin(), nums.end());      
                return;
        }
        
        for(int i =n-1;i>ind;i--)
        {
            if(nums[i]>nums[ind])    // immediate next element searching
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        reverse (nums.begin() + ind + 1, nums.end());  // ind k next elements ko ascending m likhdo
         return ;
        
        
    }
};