class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int n = intervals.size();
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++)
        {
            if(ans.empty())
            {
                ans.push_back(intervals[i]);  // emtry array return blank space
            }
            
            else
            {
                vector<int>&v = ans.back();
                int y = v[1];  // [1,2] v=1 means y = 2
                
                // Overlapping Case
                if(intervals[i][0] <= y)
                   v[1] = max(y , intervals[i][1]);
            
                // NON Overlapping Case
                else
                    ans.push_back(intervals[i]);
            }
        }
             return ans;
    }   
       
        
};