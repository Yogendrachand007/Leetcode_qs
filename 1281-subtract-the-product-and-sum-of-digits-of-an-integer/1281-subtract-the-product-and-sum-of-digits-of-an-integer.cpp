class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int digit;
        int pro=1;
        int sum=0;
                
        while(n)
        {
            digit = n % 10;
            sum = sum + digit;
            pro = pro * digit;
            
            n=n/10;
        }
        int result ;
        result = pro - sum;
    return result;
    }
    
};