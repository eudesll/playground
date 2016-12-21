class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int sum = 0, size = board.size();
        
        for (int i = 0; i < size; i++) {
            int cSize = board[i].size();
            
            for (int j = 0; j < cSize; j++) {
                if(board[i][j] == 'X' && (i == 0 || board[i - 1][j] != 'X') && (j == 0 || board[i][j - 1] != 'X')) {
                    sum++;
                }
            }
        }
        
        return sum;
    }
};