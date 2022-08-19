class Solution {
public:
    bool isSubsequence(string s, string t) {
//         int i=0, j=0;
//         int m= s.length();
//         int n = t.length();
//         if(m==0) return 1;
//         else if(n==0) return 0;
        
//         while(j<m && i<n && (m-j)<= (n-i)){
//             if(s[j] == t[i]){

//                 j++;
//                 i++;
                
                
//             }
//             else{
//                 i++;
//             }
           
//         }
//        if(j==m) return 1;
//         else return 0;
        
        
if(s.size()==0)
return 1;
else if(t.size()==0)
return 0;
        
        int i=0, j=0;
        while(i<s.size() && j<t.size() && (s.size()-i) <= (t.size()-j)){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            
            else j++;
        }
        
        if(i==s.size()) return 1;
        else return 0;
    }
};








//     int p1 =0;
//     int p2=0;
//     while((p1<s.size()  && p2<t.size())&&  (s.size()-p1)<=(t.size()-p2))
//     {
//         if(s[p1]==t[p2])
//         {
//             p1++;
//             p2++;
//         }
//         else
//             p2++;
// }
// if(p1==s.size())
// return 1;
// else
// return 0;
