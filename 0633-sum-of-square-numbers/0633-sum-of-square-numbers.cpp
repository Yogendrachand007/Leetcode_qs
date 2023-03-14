class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long  int a=0 , b = sqrt(c);
        
        long long int sum = 1;
               
        while(a<=b)
        {  
            sum = a*a + b*b;

        if( sum == c){
            return true;
        }
        else if(sum>c)
            b--;
        else
            a++;
        }
        
        return false;
        
    }
};

//  long long int a=0,b=sqrt(c);
//         long long int sqrt=1;
//         while(a<=b){
//             sqrt=a*a+b*b;
//             if(sqrt==c){
//                 return true;
//             }
//             else if(sqrt>c){
//                 b--;
//             }
//             else{
//                 a++;
//             }
//         }
//         return false;