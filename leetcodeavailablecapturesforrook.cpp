class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j]=='R'){
                    
                    
                    for(int k=j; k>=0; k--){
                        if(board[i][k]=='p' ||board[i][k]=='B'){
                            if(board[i][k]=='p'){
                            count++;
                            }class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j]=='R'){
                    
                    
                    for(int k=j; k>=0; k--){
                        if(board[i][k]=='p' ||board[i][k]=='B'){
                            if(board[i][k]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }
                    
                    
                    for(int k=i; k>=0; k--){
                        if(board[k][j]=='p' ||board[k][j]=='B'){
                            if(board[k][j]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }
                    
                    
                    
                    
                    for(int k=j; k<board.size(); k++){
                        if(board[i][k]=='p' ||board[i][k]=='B'){
                            if(board[i][k]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }

                    for(int k=i; k<board.size(); k++){
                        if(board[k][j]=='p' ||board[k][j]=='B'){
                            if(board[k][j]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }
                    
                    
                    
                    
                }
            }
        }
       
        return count;
    }
};
                        break;
                            
                        }
                    }
                    
                    
                    for(int k=i; k>=0; k--){
                        if(board[k][j]=='p' ||board[k][j]=='B'){
                            if(board[k][j]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }
                    
                    
                    
                    
                    for(int k=j; k<board.size(); k++){
                        if(board[i][k]=='p' ||board[i][k]=='B'){
                            if(board[i][k]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }

                    for(int k=i; k<board.size(); k++){
                        if(board[k][j]=='p' ||board[k][j]=='B'){
                            if(board[k][j]=='p'){
                            count++;
                            }
                        break;
                            
                        }
                    }
                    
                    
                    
                    
                }
            }
        }
       
        return count;
    }
};
