
/*
explanation:

-> here we use a prefix sum method to find the gap in each row 
  i.e in [1,2,2,1] -> the gaps are present in 1,3(1+2),5(3+2) postions
  and last gap(ending col line) will not be considered acc. to question.
 
 
-> now similarly we will find the gaps for all rows from 1 to n.

-> the gap that is most frequent will lead to less bricks to be cut.

-> to find the freq. of gaps,we will use hashmap or unordered map and 
   n-  max_gaps will give the result.
*/


class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
     unordered_map<int,int>gap;
     int n=wall.size()  ;
      
     for(int row=0;row<n;++row){
         int sum=0; //to count the prefix sum in each row
         for(int col=0;col<wall[row].size()-1;++col){
             sum+=wall[row][col];
             ++gap[sum]; //frequency of the gap is increased.
         } }
        
      int res=n;
for(auto it:gap) res=min(res,n-it.second); //min brick => n-max_gap.
      return res;  }};
//if liked please upvote. :)










