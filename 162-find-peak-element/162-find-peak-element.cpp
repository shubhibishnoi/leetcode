class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        
        int h=nums.size()-1;
        while(l<h){
            int m = l+(h-l)/2;
            
            if(nums[m]> nums[m+1]){
                h=m;

            } 
            
            else  l=m+1;
            
        }
        return l;
    }
};




// Binary Search: iteration

// class Solution {
// public:
//     int findPeakElement(const vector<int> &num) 
//     {
//         int low = 0;
//         int high = num.size()-1;
        
//         while(low < high)
//         {
//             int mid1 = (low+high)/2;
//             int mid2 = mid1+1;
//             if(num[mid1] < num[mid2])
//                 low = mid2;
//             else
//                 high = mid1;
//         }
//         return low;
//     }
// };