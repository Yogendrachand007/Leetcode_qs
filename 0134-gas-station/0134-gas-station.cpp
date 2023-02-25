class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int totalgas=0, totalcost=0;
        for(int i=0;i<gas.size();i++)
        {
            totalgas += gas[i];
            totalcost += cost[i];
        }
        
        if(totalgas < totalcost)return -1;
        
        int remainGas=0; int start = 0;
        
        for(int i=0;i<gas.size();i++)
        {
            remainGas = remainGas + (gas[i] - cost[i]);
            
         if(remainGas < 0){
             start = i+1;
            remainGas = 0; 
         }
        }return start;
    }
};