class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int flag = false;
                
       int l=0;  int h = arr.size()-1;
        int mid= l + (h-l)/2;;
        while(l<h)
        {         
            if(arr[mid]>arr[mid+1])
               h = mid;
            
            else if(arr[mid]<arr[mid+1])
                l = mid+1;
            
            // else
            //     h = mid - 1;
            mid = l + (h-l)/2;
        }
        return l;
            
        
    }
};