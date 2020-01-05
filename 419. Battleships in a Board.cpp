//https://leetcode.com/problems/battleships-in-a-board/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int cont=0;
        for (int i=0; i<board.size(); ++i){
          for (int j=0; j<board[i].size(); ++j){
            if(board[i][j]=='X'){
            int buf = 0;
            if(i>0 && board[i-1][j]=='X'){
              ++buf;
            } 
            if(i+1<board.size() && board[i+1][j]=='X'){
              ++buf;
            }
            if(j>0 && board[i][j-1]=='X'){
              ++buf;
            }
            if(j+1<board[i].size() && board[i][j+1]=='X'){
              ++buf;
            }
            if(buf>2){
                return -1;
            }
            if(buf==1){
              ++cont;
            }
            if(buf==0){
              cont += 2;
            }
          }
        }
        }
        cont/=2;
        return cont;
    }
};