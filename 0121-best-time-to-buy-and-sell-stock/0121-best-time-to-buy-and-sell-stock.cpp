class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profittoday=0,result=0;
        int min = INT_MAX; // compares 999 with largest number in an array then stores in it ...miin = 7
        int n = prices.size();
        
        for(int i=0;i<n;i++)
        {
            if(min>prices[i])
            min = prices[i];
            
          profittoday = prices[i]- min;
            
            
          if(result < profittoday)
              result  = profittoday;
              
        }
        
        return result;
        
    }
};