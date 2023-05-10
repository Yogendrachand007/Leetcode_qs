class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       set<int>s;  // set of no. containing nums numbers
        for(int x: nums)
        {
            s.insert(x);  // all elements of array to s set
        }
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int curr_ele = nums[i];
            int prev_ele = curr_ele - 1;
            int count=0;
            if(s.find(prev_ele)==s.end()) // means prev ele NOT found from 1st till end then....
            {
                while(s.find(curr_ele)!=s.end())  // not found prev ele,  so start a chain with that curr ele
                {
                    curr_ele++;
                    count++;
                }
            }
        
        ans = max(ans, count);
        }
        return ans;
        
    }   
    };