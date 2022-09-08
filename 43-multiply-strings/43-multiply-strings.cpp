class Solution {
public:
    string multiply(string n1, string n2) {
        if(n1 == "0" || n2 == "0") return "0";
        
        vector<int> ans(n1.size()+n2.size(), 0);
        for(int i=n1.size()-1; i>=0; i--){
            for(int j = n2.size()-1; j>=0 ; j--){
                ans[i+j+1] += (n1[i]-'0')* (n2[j] - '0');
                ans[i+j] +=ans[i+j+1]/10;
                ans[i+j+1]%= 10;
                }
        }
        
        int i=0;
        string res ="";
        
        while(ans[i]==0) i++;
        while(i< ans.size()) res+=to_string(ans[i++]);
        return res;
    }
};



//Time Complexity: O(mn)
//Space Complexity: O(n+m)

// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         if (num1 == "0" || num2 == "0") return "0";
        
//         vector<int> res(num1.size()+num2.size(), 0);
        
//         for (int i = num1.size()-1; i >= 0; i--) {
//             for (int j = num2.size()-1; j >= 0; j--) {
//                 res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
//                 res[i + j] += res[i + j + 1] / 10;
//                 res[i + j + 1] %= 10;
//             }
//         }
        
//         int i = 0;
//         string ans = "";
//         while (res[i] == 0) i++;
//         while (i < res.size()) ans += to_string(res[i++]);
        
//         return ans;
//     }
// };