class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> Set;  //input all string with different different (unique) elements
        int Max=0;
        
        int start=0; //start
        int end=0; // end
        
        while(start<s.size())
        {
            auto it = Set.find(s[start]);  // find the value like 'a' int the set given
            if(it==Set.end()) // after iterate, didnt get the element in the array means unique 
            {
                if(start-end+1>Max)
                    Max = start-end+1;  //'abc'  here-> 2-0+1 = 3 as length
                Set.insert(s[start]);// unique so put in set
                start++;
            }
            else{
                Set.erase(s[end]);
            end++;
            }
        }
        return Max;
        
    }
};