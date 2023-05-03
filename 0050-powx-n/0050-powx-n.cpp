class Solution {
public:
    double myPow(double x, int n) {
       
        double num=1.0;
        long nm=n;
        
         if(nm<0)
         {
          nm=-1*nm;
         }
        
        while(nm>0)
        {
            if(nm%2==1)
            {
             num = num*x;
                nm=nm-1;
               
            }
            else
            {
                 x=x*x;
                nm = nm/2;
            }
        }
             if(n<0) num = (double) (1.0) / double(num);
        
        return num;
    }
             
};