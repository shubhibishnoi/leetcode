class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h= arr.size()-1;
        if(h+1<3) return -1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(arr[m]> arr[m+1] && arr[m-1<arr[m]] ){
               h = m-1;
                
                
            }
            else{
                l=m+1;
            }
            
            
        }
        return l;
        
    }
};