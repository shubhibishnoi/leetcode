class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int i=1;
        p.push(s[0]);
        while(i<s.size()){
            if(!p.empty()){
                if((p.top() == '(' && s[i]== ')') || (p.top() == '['  && s[i] == ']')|| (p.top()== '{' && s[i]== '}')){
                    p.pop();
                    i++;
                    
                }
                else{
                    p.push(s[i]);
                    i++;
                }
            }
            
            else{
                p.push(s[i]);
                i++;
            }
        }
        
//     if(p.empty()) return true;
        
//         else return false;
        
        return p.empty()? true : false;
    }
};