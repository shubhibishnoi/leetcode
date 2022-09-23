

class Solution {
public:
    bool search(vector<vector<char>>& board, const string& word , int i , int j , int index){
    
        if(index == word.size()) return true;
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size() - 1) return false;
        
        if(board[i][j] != word[index])
            return false;
        
        board[i][j] = '*'; ///marking it as visited 
        
        bool furtherSearch =  search(board, word, i+1, j, index+1) || // up
                              search(board, word, i-1, j, index+1) || // down
                              search(board, word, i, j-1, index+1) || // left
                              search(board, word, i, j+1, index+1);   // right
       board[i][j] = word[index];
        return furtherSearch;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i = 0; i<board.size(); i++)
            for(int j = 0; j<board[0].size(); ++j)
                if(search(board , word , i , j , 0))
                    return true;
        
        return false;
    }
};




//   bool dfs(vector<vector<char>>&board,int i ,int j, string word,int k){
//         int n = board.size();
//         int m = board[0].size();
//         if(k==word.length())return true;
//         if(i<0 || j<0 ||i>=n ||j>=m ||board[i][j]!=word[k])
//             return false;
        
//         char temp = board[i][j];
//         board[i][j]=' ';
//         bool found = dfs(board,i+1,j,word,k+1) || dfs(board,i-1,j,word,k+1)||       dfs(board,i,j-1,word,k+1)|| dfs(board,i,j+1,word,k+1);
        
//         board[i][j]=temp;
        
//         return found;
        
//     }
//     bool exist(vector<vector<char>>& board, string word) {
//         int n = board.size();
//         int m = board[0].size();
//         int k=0;
//         for(int i =0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(board[i][j]==word[k] and dfs(board,i,j,word,k)) return true;
//             }
//         }
        
//         return false;









// class Solution {

// public:
    
//     bool findAdjacent(int i, int j, int index, string word, vector<vector<char>>& board,  vector<vector<bool>> &visited){
//         int n = board.size();
//         int m =
        
//     }
// };