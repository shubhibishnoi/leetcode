#include <set>

class Solution {
public:
    int ladderLength(string si, string ei, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({si,1});
        unordered_set<string>st(wordList.begin(), wordList.end());
        st.erase(si);
        while(!q.empty()){
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(word == ei) return steps;
            for(int i=0; i<word.size(); i++){
                char original = word[i];
                for(char ch = 'a' ; ch<='z' ; ch++){
                    //replacing each word[i] with a to z
                    word[i] = ch;
                    //checking if they are in the set or not
                    if(st.find(word) != st.end()){
                        st.erase(word);
                        q.push({word,steps+1});
                    }
                }
                word[i] = original ;
                
            }
        }
        
        return 0;
        
    }
};