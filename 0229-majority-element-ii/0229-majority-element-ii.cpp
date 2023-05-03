class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int sz = nums.size();
        int nums1=-1, nums2=-1, c1=0,c2=0, i;
        
        for(i=0;i<sz;i++)
        {
            if(nums[i]==nums1)  // means one of the element of array is in nums1
                c1++;
            else if(nums[i]==nums2)  // means other element after nums1 is assigned to nums2 
                c2++;
            else if(c1==0)
            { // no element assigned to nums1 and nums2 till now
                nums1= nums[i];
                 c1=1;
            }
            else if(c2==0)
            {
                nums2 = nums[i];
                c2=1;
            }
            else
            {
                c1--;
            c2--;
            }
        }
        
        vector <int> ans; // because function is vector so return a vector value onlyyyyyy....
        c1 = c2 = 0;
        for(i =0;i<sz;i++)
        {
            if(nums[i]==nums1)
                c1++;
            else if(nums[i]==nums2)
                c2++;
        }
        
        if(c1>sz/3)
            ans.push_back(nums1);
        if(c2>sz/3)
            ans.push_back(nums2);
        
        return ans;       
    }
};