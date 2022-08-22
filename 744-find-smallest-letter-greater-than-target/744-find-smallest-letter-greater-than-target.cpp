class Solution {
public:
    char nextGreatestLetter(vector<char>& let, char t) {
        int l=0;
        int h= let.size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(let[m] <= t){
                l= m+1;
            }
            
            else if(let[m] > t){
                h=m-1;
            }
        }
        
        if(l==let.size()) return let[0];
        
        else return let[l];
    }
};