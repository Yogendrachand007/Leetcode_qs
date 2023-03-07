class Solution {
public:
    int arrangeCoins(int n) {
        
        int a = n;
        long long count = 1;

        if(n==0)return 0;
        if(n==1)return 1;
        
        while(a>0)
        { 
              count++;
            a = a-count; 
        }
        return count-1;
    }
};


 