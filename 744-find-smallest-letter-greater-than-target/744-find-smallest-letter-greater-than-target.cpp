class Solution {
public:
    char nextGreatestLetter(vector<char>& let, char t) {
        int n = let.size()-1;
        int l =0;
        int h= let.size()-1;
  
        
        while(l<=h){
            int m = l+(h-l)/2;
            
            if(let[m] > t){
                h = m-1;
            }
            
            else if(let[m] <= t){
                l=m+1;
            }
            

        }
        if(l==let.size())
            return let[0];
        
        return let[l];
    }
};



// ayushashank's avatar
// ayushashank

// 18
// January 29, 2022 7:57 PM

// 82 VIEWS

// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
//         int s=0;
//         int e=letters.size()-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(letters[mid]<=target)
//                 s=mid+1;
//             else 
//                 e=mid-1;
//         }
//         if(s==letters.size())
//             return letters[0];
//         return letters[s];
//     }
// };


        
