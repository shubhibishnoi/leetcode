// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         if(nums.size()==1) return nums[0];
//         int l=0, r=nums.size()-1, mid, num;
        
//         while(l < r){
//             mid = l+(r-l)/2;
//             num = (mid%2 == 0) ? mid+1 : mid-1;
//             if(nums[mid]==nums[num]) l = mid+1;
//             else r = mid;
//         }
//         return nums[l];
//     }

// };

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xOR=0;  //a^a = 0. So all the elements repeating twice become '0' and we return the non-repeating element.
        for(int i=0;i<nums.size();i++) xOR ^= nums[i];
        
        return xOR;
    }

};



// this pattern will be missed when single element is appeared in the array.

// From these points, we can implement algorithm.
// 1. Take left and right pointers . 
//     left points to start of list. right points to end of the list.
// 2. find mid.
//     if mid is even, then it's duplicate should be in next index.
// 	or if mid is odd, then it's duplicate  should be in previous index.
// 	check these two conditions, 
// 	if any of the conditions is satisfied,
// 	then pattern is not missed, 
// 	so check in next half of the array. i.e, left = mid + 1
// 	if condition is not satisfied, then the pattern is missed.
// 	so, single number must be before mid.
// 	so, update end to mid.
// 3. At last return the nums[left]