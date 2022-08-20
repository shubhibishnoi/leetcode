class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
//         int l = m[0][0];
//         int n = m.size();
//         int h = m[n-1][n-1];

//     while(l<h){
//         int mid =l+ (h - l)/2;
//         int cnt =0;
//         for(int i=0;i<n;i++){
//             cnt += upper_bound(m[i].begin(),m[i].end(), mid) - m[i].begin();
//         }
        
//         if(cnt<k)
//             l =mid+1;
            
        
        
//         else h=mid;
       

//     }
        
//         return l;
        

    
        priority_queue<int>pq; int n = m.size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                pq.push(m[i][j]);
                if(pq.size() > k) pq.pop();
            }
        return pq.top();   
    }
};

