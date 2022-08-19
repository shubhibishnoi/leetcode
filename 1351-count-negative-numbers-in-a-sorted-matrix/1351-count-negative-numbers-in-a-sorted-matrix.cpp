



// Grid is sorted in non-increasing order, so lets start from the intersection of the last column and first row, suppose the element at that position is negative - then where shall we move? obviously all the elements to the bottom of this element would always be negative, due to non-increasing sorting order, so we just add that to our counting variable and move to the left side of our grid.
// However, if this element isn't negative, then we move down as we may get any negative element downwards, but would never ever get any such element towards the leftwards, all because of the sorting criteria.
// hence this is the code,

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int ans= 0;
        int n= grid.size();
        int m= grid[0].size();
        int i= 0;
        int j= m-1;
        while(i>= 0 && i<n && j>= 0 && j<m)
        {
            if(grid[i][j] < 0)
            {
                ans+= (n-i);
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};


