class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        vector<int> v;
        int i =0;
        int j=0;
        
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        
        while(i<n1.size() && j<n2.size()){
            if(n1[i] == n2[j]){
                v.push_back(n1[i]);
                i++;
                j++;
            }
            
            else if(n1[i] < n2[j]) {
                i++;
            }
            
            else j++;
        }
        return v;
        
    }
};