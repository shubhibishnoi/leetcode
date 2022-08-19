class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int l = m[0][0];
        int n = m.size();
        int h = m[n-1][n-1];

    while(l<h){
        int mid =l+ (h - l)/2;
        int cnt =0;
        for(int i=0;i<n;i++){
            cnt += upper_bound(m[i].begin(),m[i].end(), mid) - m[i].begin();
        }
        
        if(cnt<k)
            l =mid+1;
            
        
        
        else h=mid;
       

    }
        
        return l;
    }
};

//   int kthSmallest(vector<vector<int>>& matrix, int k) {
        
//         int n = matrix.size();
//         int low = matrix[0][0];
//         int high = matrix[n-1][n-1];
//         while(low < high){
            
//             int mid = low + (high - low)/2;
//             int count = 0;
//             for(int i = 0; i < n; i++){
//                 count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                
//             }
            
//             if(count < k){
//                 low = mid + 1;
//             }else{
//                 high = mid;
//             }
            
//         }
        
//         return low;
//     }
// };